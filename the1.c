


int main(int argc, char const *argv[])
{
	
   int x_dim,y_dim,num_obst,num_hunters, num_preys;
   int o_x_dim,o_y_dim;
   int h_x_dim,h_y_dim;
   int p_x_dim,p_y_dim;
   int h_energy, p_energy;

   scanf("%d %d", &x_dim, &y_dim);

   char field_array[x_dim][y_dim];

   for (int i = 0; i < x_dim; ++i)
   {
   		for (int j = 0; j < y_dim; ++j)
   		{
   			//printf("test\n");
   			field_array[i][j] = ' ';
   		}
   		//printf("\n");
   }


   scanf("%d", &num_obst);

   int obst_array[num_obst][2];

   for (int i = 0; i < num_obst; ++i)
   {
	   scanf("%d %d", &o_x_dim, &o_y_dim);
	   obst_array[i][0] = o_x_dim;
	   obst_array[i][1] = o_y_dim;
	   field_array[o_x_dim][o_y_dim] = 'X' ;
   }

   scanf("%d", &num_hunters);
   int hunter_array[num_hunters][3];


   for (int i = 0; i < num_hunters; ++i)
   {
	   scanf("%d %d %d", &h_x_dim, &h_y_dim, &h_energy);
	   hunter_array[i][0] = h_x_dim;
	   hunter_array[i][1] = h_y_dim;
	   hunter_array[i][1] = h_energy;
	   field_array[h_x_dim][h_y_dim] = 'H' ;


   }

   scanf("%d", &num_preys);
   int prey_array[num_preys][3];

	for (int i = 0; i < num_preys; ++i)
   {
	   scanf("%d %d %d", &p_x_dim, &p_y_dim, &p_energy);
	   prey_array[i][0] = p_x_dim;
	   prey_array[i][1] = p_y_dim;
	   prey_array[i][1] = p_energy;
	   field_array[p_x_dim][p_y_dim] = 'P' ;
   
   }



   printf( "\nOUTPUT:\n");
   
   printf("+");
   for (int i = 0; i < x_dim; ++i)
   {
   		printf("_");
   }
   printf("+\n");

   for (int i = 0; i < x_dim; ++i)
   {
   		printf("|");
   		for (int j = 0; j < y_dim; ++j)
   		{
   			//printf("test\n");
   			printf("%c", field_array[i][j]);
   		}
   		printf("|\n");
   }
   printf("+");
   for (int i = 0; i < x_dim; ++i)
   {
   		printf("_");
   }
   printf("+\n");

   return 0;	

}