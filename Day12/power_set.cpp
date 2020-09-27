
//jth bit of n is set or not  => n & (1 << j)

void printPowerSet(char *set, int set_size) 
{ 


    int pow_set_size = pow(2, set_size); 
    int counter, j; 
  
    for(counter = 0; counter < pow_set_size; counter++) 
    { 
        for(j = 0; j < set_size; j++) 
        { 

            if(counter & (1 << j)) 
                cout << set[j]; 
        }

    cout << endl; 
    } 
} 