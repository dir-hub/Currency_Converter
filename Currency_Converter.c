#include<stdio.h>
double usdtoinr(double usd_amount){
    return usd_amount * 84.68;
}
double inrtousd(double inr_amount){
    return inr_amount / 84.68;
}

double eurtousd(double eur_amount){
    return eur_amount * 1.06;
}
double usdtoeur(double usd_amount){
    return usd_amount / 1.06;
}
double gbptousd(double gbp_amount){
    return gbp_amount * 1.27;
}
double usdtogbp(double usd_amount){
    return usd_amount / 1.27;
}
double usdtojpy(double usd_amount){
    return usd_amount * 150.11;
}
double jpytousd(double jpy_amount){
    return jpy_amount / 150.11;
}
double eurtoinr(double eur_amount){
    return eur_amount * 89.48;
}
double inrtoeur(double inr_amount){
    return inr_amount / 89.48;
}
double gbptoinr(double gbp_amount){
    return gbp_amount * 107.88;
}
double inrtogbp(double inr_amount){
    return inr_amount / 107.88;
}
double inrtojpy(double inr_amount){
    return inr_amount * 1.77;
}
double jpytoinr(double jpy_amount){
    return jpy_amount / 1.77;
}
double gbptoeur(double gbp_amount){
    return gbp_amount * 1.21;
}
double eurtogbp(double eur_amount){
    return eur_amount / 1.21;
}
double eurtojpy(double eur_amount){
    return eur_amount * 158.55;
}
double jpytoeur(double jpy_amount){
    return jpy_amount / 158.55;
}
double gbptojpy(double gbp_amount){
    return gbp_amount * 191.17;
}
double jpytogbp(double jpy_amount){
    return jpy_amount / 191.17;
}

int main(){
    char your_currency,converted_currency;
    double amount;
    printf("Currency Converter.... \n");
    printf("Remember that currency rates are not stable,for best result search on web.\n ");
    printf("\n");
    printf("\n");

    printf("To USD press 'u'\n");
    printf("To INR press 'i'\n");
    printf("To EUR press 'e'\n");
    printf("To GBP press 'g'\n");
    printf("To JPY press 'j'\n");
    printf("Choose your currency: ");
    scanf("%c", &your_currency);
    printf("\n");
    printf("\n");
    printf("Choose a currency to be converted: \n");
    printf("To USD press 'u'\n");
    printf("To INR press 'i'\n");
    printf("To EUR press 'e'\n");
    printf("To GBP press 'g'\n");
    printf("To JPY press 'j'\n");
    scanf(" %c", &converted_currency);

    if (your_currency == 'u' && converted_currency == 'i')
    {
        printf("Enter the amount in USD : ");
        scanf("%lf", &amount);
        printf("%.2lf USD in INR is : %.2lf\n",amount,usdtoinr(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='i' && converted_currency == 'u')
    {
        printf("Enter the amount in INR : ");
        scanf("%lf", &amount);
        printf("%.2lf INR in USD is : %.2lf\n",amount,inrtousd(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='e' && converted_currency == 'u')
    {
        printf("Enter the amount in EUR : ");
        scanf("%lf", &amount);
        printf("%.2lf EUR in USD is : %.2lf\n",amount,eurtousd(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='u' && converted_currency == 'e')
    {
        printf("Enter the amount in USD : ");
        scanf("%lf", &amount);
        printf("%.2lf USD in EUR is : %.2lf\n",amount,usdtoeur(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='g' && converted_currency == 'u')
    {
        printf("Enter the amount in GBP : ");
        scanf("%lf", &amount);
        printf("%.2lf GBP in USD is : %.2lf\n",amount,gbptousd(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='u' && converted_currency == 'g')
    {
        printf("Enter the amount in USD : ");
        scanf("%lf", &amount);
        printf("%.2lf USD in GBP is : %.2lf\n",amount,usdtogbp(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='u' && converted_currency == 'j')
    {
        printf("Enter the amount in USD : ");
        scanf("%lf", &amount);
        printf("%.2lf USD in JPY is : %.2lf\n",amount,usdtojpy(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='j' && converted_currency == 'u')
    {
        printf("Enter the amount in JPY : ");
        scanf("%lf", &amount);
        printf("%.2lf JPY in USD is : %.2lf\n",amount,jpytousd(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='e' && converted_currency == 'i')
    {
        printf("Enter the amount in EUR : ");
        scanf("%lf", &amount);
        printf("%.2lf EUR in INR is : %.2lf\n",amount,eurtoinr(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='i' && converted_currency == 'e')
    {
        printf("Enter the amount in INR : ");
        scanf("%lf", &amount);
        printf("%.2lf INR in EUR is : %.2lf\n",amount,inrtoeur(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='g' && converted_currency == 'i')
    {
        printf("Enter the amount in GBP : ");
        scanf("%lf", &amount);
        printf("%.2lf GBP in INR is : %.2lf\n",amount,gbptoinr(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='i' && converted_currency == 'g')
    {
        printf("Enter the amount in INR : ");
        scanf("%lf", &amount);
        printf("%.2lf INR in GBP is : %.2lf\n",amount,inrtogbp(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='i' && converted_currency == 'j')
    {
        printf("Enter the amount in INR : ");
        scanf("%lf", &amount);
        printf("%.2lf INR in JPY is : %.2lf\n",amount,inrtojpy(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='j' && converted_currency == 'i')
    {
        printf("Enter the amount in JPY : ");
        scanf("%lf", &amount);
        printf("%.2lf JPY in INR is : %.2lf\n",amount,jpytoinr(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='g' && converted_currency == 'e')
    {
        printf("Enter the amount in GBP : ");
        scanf("%lf", &amount);
        printf("%.2lf GBP in EUR is : %.2lf\n",amount,gbptoeur(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='e' && converted_currency == 'g')
    {
        printf("Enter the amount in EUR : ");
        scanf("%lf", &amount);
        printf("%.2lf EUR in GBP is : %.2lf\n",amount,eurtogbp(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='e' && converted_currency == 'j')
    {
        printf("Enter the amount in EUR : ");
        scanf("%lf", &amount);
        printf("%.2lf EUR in JPY is : %.2lf\n",amount,eurtojpy(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='j' && converted_currency == 'e')
    {
        printf("Enter the amount in JPY : ");
        scanf("%lf", &amount);
        printf("%.2lf JPY in EUR is : %.2lf\n",amount,jpytoeur(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='g' && converted_currency == 'j')
    {
        printf("Enter the amount in GBP : ");
        scanf("%lf", &amount);
        printf("%.2lf GBP in JPY is : %.2lf\n",amount,gbptojpy(amount));
        printf("Based on 5 dec,22:23");
    }else if (your_currency =='j' && converted_currency == 'g')
    {
        printf("Enter the amount in JPY : ");
        scanf("%lf", &amount);
        printf("%.2lf JPY in GBP is : %.2lf\n",amount,jpytogbp(amount));
        printf("Based on 5 dec,22:23");
    }
 return 0;
}
