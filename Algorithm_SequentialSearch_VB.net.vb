Module Module1
    Sub Main()

        Dim vetor() As Integer = {5, 15, 3, 13, 7, 9, 43, 27, 8, 66}
        Dim lenght As Integer = 9

        exibeDados(vetor, lenght)
        Dim posicao As Integer = buscaSequencial(vetor, lenght, 9)

        Console.WriteLine("O valor " + lenght.ToString + " esta no posição " + posicao.ToString)
        Console.Read()

    End Sub

    Sub exibeDados(ByVal args() As Integer, ByVal lenght As Integer)
        Dim mensagem As String = ""

        For i As Integer = 0 To lenght
            mensagem = mensagem + "Vetor [" + i.ToString + "] = " + args(i).ToString + vbCrLf
        Next

        Console.WriteLine(mensagem)
    End Sub

    Public Function buscaSequencial(ByVal args() As Integer, ByVal lenght As Integer, ByVal value As Integer)
        Dim i As Integer = 0

        While ((i < lenght) And (args(i) <> value))
            i += 1
        End While

        If ((lenght = 0) Or (i >= lenght)) Then
            i = -1
        End If

        Return i
    End Function
End Module

