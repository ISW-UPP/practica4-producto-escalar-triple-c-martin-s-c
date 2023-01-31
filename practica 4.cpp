for (int i = 0; i < 3; i++)
    {
        vector1[i] = (int)(producto_escalarA / producto_escalarB) * producto_escalarC;
        vector2[i] = (int)(producto_escalarA / producto_escalarB) * producto_escalarC;
        vector3[i] = (int)(producto_escalarA / producto_escalarB) * producto_escalarC;
        
 
    }

    for (int i = 0; i < 3; i++)
    {
        cout << vector1[i] << "\t";
    }
    cout << endl ;

    for (int i = 0; i < 3; i++)
    {
        cout << vector2[i] << "\t";
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << vector3[i] << "\t";
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        producto_escalarTriple = vector1[i] + vector2[i] * vector3[i];
    }
