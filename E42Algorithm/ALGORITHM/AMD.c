1.	#include <stdio.h>
2.	#include <stdlib.h>
3.	void main()
4.	{
5.	   int option;
6.	   do
7.	   {
8.	        printf("\n A Program to represent a Graph by using an ");
9.		printf("Adjacency Matrix method \n ");
10.		printf("\n 1. Directed Graph ");
11.		printf("\n 2. Un-Directed Graph ");
12.		printf("\n 3. Exit ");
13.		printf("\n\n Select a proper option : ");
14.		scanf("%d", &option);
15.		switch(option)
16.		{
17.	            case 1 : dir_graph();
18.	                     break;
19.	            case 2 : undir_graph();
20.	                     break;
21.	            case 3 : exit(0);
22.		} // switch
23.	    }while(1);
24.	}
25.
26.	int dir_graph()
27.	{
28.	    int adj_mat[50][50];
29.	    int n;
30.	    int in_deg, out_deg, i, j;
31.	    printf("\n How Many Vertices ? : ");
32.	    scanf("%d", &n);
33.	    read_graph(adj_mat, n);
34.	    printf("\n Vertex \t In_Degree \t Out_Degree \t Total_Degree ");
35.	    for (i = 1; i <= n ; i++ )
36.	    {
37.	        in_deg = out_deg = 0;
38.		for ( j = 1 ; j <= n ; j++ )
39.		{
40.	            if ( adj_mat[j][i] == 1 )
41.	                in_deg++;
42.		}
43.	        for ( j = 1 ; j <= n ; j++ )
44.	            if (adj_mat[i][j] == 1 )
45.	                out_deg++;
46.	            printf("\n\n %5d\t\t\t%d\t\t%d\t\t%d\n\n",i,in_deg,out_deg,in_deg+out_deg);
47.	    }
48.	    return;
49.	}
50.
51.	int undir_graph()
52.	{
53.	    int adj_mat[50][50];
54.	    int deg, i, j, n;
55.	    printf("\n How Many Vertices ? : ");
56.	    scanf("%d", &n);
57.	    read_graph(adj_mat, n);
58.	    printf("\n Vertex \t Degree ");
59.	    for ( i = 1 ; i <= n ; i++ )
60.	    {
61.	        deg = 0;
62.	        for ( j = 1 ; j <= n ; j++ )
63.	            if ( adj_mat[i][j] == 1)
64.	                deg++;
65.	        printf("\n\n %5d \t\t %d\n\n", i, deg);
66.	    }
67.	    return;
68.	}
69.
70.	int read_graph ( int adj_mat[50][50], int n )
71.	{
72.	    int i, j;
73.	    char reply;
74.	    for ( i = 1 ; i <= n ; i++ )
75.	    {
76.	        for ( j = 1 ; j <= n ; j++ )
77.	        {
78.	            if ( i == j )
79.	            {
80.	                adj_mat[i][j] = 0;
81.			continue;
82.	            }
83.	            printf("\n Vertices %d & %d are Adjacent ? (Y/N) :",i,j);
84.	            scanf("%c", &reply);
85.	            if ( reply == 'y' || reply == 'Y' )
86.	                adj_mat[i][j] = 1;
87.	            else
88.	                adj_mat[i][j] = 0;
89.		}
90.	    }
91.	    return;
92.	}
