package live;
import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;
public class Test {
    public static void main(String[] args) {
        // test-case(a)
        Veena v = new Veena();
        v.play();

        // test-case(b)
        Saxophone s = new Saxophone();
        s.play();

        // test-case(c)
        Playable p;
        p = new Veena();
        p.play();
        p = new Saxophone();
        p.play();
    }
}
