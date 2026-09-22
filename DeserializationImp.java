import  java.io.IOException;
import java.io.ObjectInputStream;
import java.io.FileInputStream;
import  java.lang.*;

public class DeserializationImp {


    public static void main(String[] args) {

        try{
            ObjectInputStream ois = new ObjectInputStream(new FileInputStream("student.ser"));
        Student student =  (Student) ois.readObject();

        student.displayMembers();
        ois.close();
        System.out.println("hii");


        }catch(IOException err){
            System.out.println(err);
        }catch(ClassNotFoundException err){
            System.out.println(err);
        }

        
    }
}
