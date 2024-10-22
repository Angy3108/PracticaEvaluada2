import javax.swing.JOptionPane;

public class test {
    public static void main(String[] args) {
        int ingreso;
        int gasto;
        int porcentajeA;
        int porcentajeO;
        String Variablesoli1;
        String Variablesoli2;
        Variablesoli1=JOptionPane.showInputDialog(  "Ingrese su salario");
        Variablesoli2=JOptionPane.showInputDialog("Ingrese su gasto mensual por alimentacion");
        ingreso=Integer.parseInt(Variablesoli1);
        gasto=Integer.parseInt(Variablesoli2);
        porcentajeA=(ingreso/gasto);
        porcentajeO= 100-porcentajeA;
        System.out.println("Su porcentaje en gastos de alimentacion es: "+porcentajeA);
        System.out.println("Su porcentaje para otros gastos es: "+porcentajeO);
        JOptionPane.showMessageDialog(null, "su porcentaje en gastos de alimentacion es:"+porcentajeA+ "Su porcentaje para otros gastos es: "+porcentajeO);

    }
}