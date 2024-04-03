
// Renk union
union Color{
    struct{
        unsigned char red; 
        unsigned char green;
        unsigned char blue;
    } rgb;
    unsigned int hex;
};

// Veri union
union Data{
    int integer;
    float floating_point;
    char* string;
};

// Ölçü union
union Length{
    float meter;
    float centimeter;
};

// Şekil union
union Shape{
    struct{
        float length;
        float width;
    } rectangle;
    float radius;
};

