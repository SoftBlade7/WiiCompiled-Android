#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80515624(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_10 = 0;
    uint32_t r6_addr_11 = 0;
    uint32_t r6_addr_12 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_addr_8 = 0;
    uint32_t r6_addr_9 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r7_addr_7 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_addr_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80515624;

loc_80515624:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r5));
    r6 = MemoryInline::FlatRead32(r3);
    r7 = MemoryInline::FlatRead8((r6 + 18));
}

loc_8051565C:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(255))) {
        goto loc_805157CC;
    }
}

loc_80515660:
{
    r6 = 0x809C0000u;
    r8 = 0;
    r6 = MemoryInline::FlatRead32((r6 + -10520));
    r9 = MemoryInline::FlatRead32((r6 + 28));
    r11 = MemoryInline::FlatRead16((r9 + 4));
    goto loc_805156D8;
}

loc_80515678:
{
    r0 = (r8 & 65535);
}

loc_80515680:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r11))) {
        goto loc_80515694;
    }
}

loc_80515684:
{
    r6 = MemoryInline::FlatRead32(r9);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r6_addr_2 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_2);
    goto loc_80515698;
}

loc_80515694:
{
    r6 = 0;
}

loc_80515698:
{
    r12 = MemoryInline::FlatRead32(r6);
    r10 = 0;
    r7 = MemoryInline::FlatRead8(r12);
}

loc_805156A8:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r5))) {
        goto loc_805156C8;
    }
}

loc_805156AC:
{
    r0 = MemoryInline::FlatRead8((r12 + 1));
    r7 = (r7 + r0);
    r0 = (r7 + -1);
    r0 = (r0 & 255);
}

loc_805156C0:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_805156C8;
    }
}

loc_805156C4:
{
    r10 = 1;
}

loc_805156C8:
{
}

loc_805156CC:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_805156D4;
    }
}

loc_805156D0:
{
    goto loc_805156E8;
}

loc_805156D4:
{
    r8 = (r8 + 1);
}

loc_805156D8:
{
    r0 = (r8 & 65535);
}

loc_805156E0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r11))) {
        goto loc_80515678;
    }
}

loc_805156E4:
{
    r6 = 0;
}

loc_805156E8:
{
}

loc_805156EC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805157F8;
    }
}

loc_805156F0:
{
    r0 = 6;
    r7 = 0;
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r7));
    r7 = 0;
    r10 = 0x809C0000u;
    ctr = r0;
}

loc_80515708:
{
    r0 = MemoryInline::FlatRead32(r6);
    r8 = (r0 + r7);
    r9 = MemoryInline::FlatRead8((r8 + 2));
}

loc_80515718:
{
    if ((static_cast<uint32_t>(r9) == static_cast<uint32_t>(255))) {
        goto loc_805157C0;
    }
}

loc_8051571C:
{
    r11 = MemoryInline::FlatRead32((r10 + -10520));
    r8 = MemoryInline::FlatRead32((r11 + 28));
}

loc_80515728:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80515734;
    }
}

loc_8051572C:
{
    r0 = MemoryInline::FlatRead16((r8 + 4));
    goto loc_80515738;
}

loc_80515734:
{
    r0 = 0;
}

loc_80515738:
{
}

loc_8051573C:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r0))) {
        goto loc_80515768;
    }
}

loc_80515740:
{
    r8 = MemoryInline::FlatRead32((r11 + 28));
    r0 = MemoryInline::FlatRead16((r8 + 4));
}

loc_8051574C:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r0))) {
        goto loc_80515760;
    }
}

loc_80515750:
{
    r8 = MemoryInline::FlatRead32(r8);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 262140);
    r8_addr_2 = (r8 + r0);
    r8 = MemoryInline::FlatRead32(r8_addr_2);
    goto loc_8051576C;
}

loc_80515760:
{
    r8 = 0;
    goto loc_8051576C;
}

loc_80515768:
{
    r8 = 0;
}

loc_8051576C:
{
    r8 = MemoryInline::FlatRead32(r8);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r9 = MemoryInline::FlatRead8((r8 + 1));
    r8 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + r9);
    r8 = (r8 + -1);
    r9 = (r8 & 255);
}

loc_8051578C:
{
    if ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r0))) {
        goto loc_805157A0;
    }
}

loc_80515790:
{
    r8 = MemoryInline::FlatRead32(r4);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 262140);
    r8_addr_4 = (r8 + r0);
    r9 = MemoryInline::FlatRead32(r8_addr_4);
    goto loc_805157A4;
}

loc_805157A0:
{
    r9 = 0;
}

loc_805157A4:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r8 = (r3 + r0);
    MemoryInline::FlatWrite32((r8 + 32), r9);
    r8 = MemoryInline::FlatRead16((r3 + 6));
    r0 = (r8 + 1);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
}

loc_805157C0:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80515708;
    }
}

loc_805157C8:
{
    goto loc_805157F8;
}

loc_805157CC:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_805157D4:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r0))) {
        goto loc_805157E8;
    }
}

loc_805157D8:
{
    r6 = MemoryInline::FlatRead32(r4);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & 262140);
    r6_addr_5 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_5);
    goto loc_805157EC;
}

loc_805157E8:
{
    r6 = 0;
}

loc_805157EC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 32), r6);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
}

loc_805157F8:
{
    r6 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead8((r6 + 19));
}

loc_80515804:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(255))) {
        goto loc_80515964;
    }
}

loc_80515808:
{
    r6 = 0x809C0000u;
    r8 = 0;
    r6 = MemoryInline::FlatRead32((r6 + -10520));
    r9 = MemoryInline::FlatRead32((r6 + 28));
    r11 = MemoryInline::FlatRead16((r9 + 4));
    goto loc_80515880;
}

loc_80515820:
{
    r0 = (r8 & 65535);
}

loc_80515828:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r11))) {
        goto loc_8051583C;
    }
}

loc_8051582C:
{
    r6 = MemoryInline::FlatRead32(r9);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & 262140);
    r6_addr_9 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_9);
    goto loc_80515840;
}

loc_8051583C:
{
    r6 = 0;
}

loc_80515840:
{
    r12 = MemoryInline::FlatRead32(r6);
    r10 = 0;
    r7 = MemoryInline::FlatRead8(r12);
}

loc_80515850:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r5))) {
        goto loc_80515870;
    }
}

loc_80515854:
{
    r0 = MemoryInline::FlatRead8((r12 + 1));
    r7 = (r7 + r0);
    r0 = (r7 + -1);
    r0 = (r0 & 255);
}

loc_80515868:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_80515870;
    }
}

loc_8051586C:
{
    r10 = 1;
}

loc_80515870:
{
}

loc_80515874:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8051587C;
    }
}

loc_80515878:
{
    goto loc_80515890;
}

loc_8051587C:
{
    r8 = (r8 + 1);
}

loc_80515880:
{
    r0 = (r8 & 65535);
}

loc_80515888:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r11))) {
        goto loc_80515820;
    }
}

loc_8051588C:
{
    r6 = 0;
}

loc_80515890:
{
}

loc_80515894:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80515990;
    }
}

loc_80515898:
{
    r0 = 6;
    r5 = 0;
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r5));
    r5 = 0;
    r9 = 0x809C0000u;
    ctr = r0;
}

loc_805158B0:
{
    r0 = MemoryInline::FlatRead32(r6);
    r7 = (r0 + r5);
    r8 = MemoryInline::FlatRead8((r7 + 8));
}

loc_805158C0:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(255))) {
        goto loc_80515958;
    }
}

loc_805158C4:
{
    r10 = MemoryInline::FlatRead32((r9 + -10520));
    r7 = MemoryInline::FlatRead32((r10 + 28));
}

loc_805158D0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_805158DC;
    }
}

loc_805158D4:
{
    r0 = MemoryInline::FlatRead16((r7 + 4));
    goto loc_805158E0;
}

loc_805158DC:
{
    r0 = 0;
}

loc_805158E0:
{
}

loc_805158E4:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0))) {
        goto loc_80515910;
    }
}

loc_805158E8:
{
    r7 = MemoryInline::FlatRead32((r10 + 28));
    r0 = MemoryInline::FlatRead16((r7 + 4));
}

loc_805158F4:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0))) {
        goto loc_80515908;
    }
}

loc_805158F8:
{
    r7 = MemoryInline::FlatRead32(r7);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & 262140);
    r7_addr_2 = (r7 + r0);
    r7 = MemoryInline::FlatRead32(r7_addr_2);
    goto loc_80515914;
}

loc_80515908:
{
    r7 = 0;
    goto loc_80515914;
}

loc_80515910:
{
    r7 = 0;
}

loc_80515914:
{
    r7 = MemoryInline::FlatRead32(r7);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r8 = MemoryInline::FlatRead8(r7);
}

loc_80515924:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0))) {
        goto loc_80515938;
    }
}

loc_80515928:
{
    r7 = MemoryInline::FlatRead32(r4);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & 262140);
    r7_addr_4 = (r7 + r0);
    r8 = MemoryInline::FlatRead32(r7_addr_4);
    goto loc_8051593C;
}

loc_80515938:
{
    r8 = 0;
}

loc_8051593C:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 * 24);
    r7 = (r3 + r0);
    MemoryInline::FlatWrite32((r7 + 56), r8);
    r7 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
}

loc_80515958:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805158B0;
    }
}

loc_80515960:
{
    goto loc_80515990;
}

loc_80515964:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_8051596C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_80515980;
    }
}

loc_80515970:
{
    r4 = MemoryInline::FlatRead32(r4);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & 262140);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    goto loc_80515984;
}

loc_80515980:
{
    r4 = 0;
}

loc_80515984:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 56), r4);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
}

loc_80515990:
{
    r3 = 0x80890000u;
    r30 = r31;
    f31.d = MemoryInline::FlatReadFloat32((r3 + -1476));
    r29 = 0;
}

loc_805159A0:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_805159A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80515A20;
    }
}

loc_805159AC:
{
    r28 = MemoryInline::FlatRead32((r30 + 56));
    r3 = (r1 + 8);
    r5 = (r31 + 8);
    r4 = (r28 + 8);
    // inline leaf 0x8051201C (9 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051201C
    r3 = (r1 + 8);
    ctx->lr = 0x805159C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243A00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r30 + 76), f1.d);
    r3 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32(r28);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 60), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 64), f0.d);
    r3 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32(r28);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    goto loc_80515A34;
}

loc_80515A20:
{
    MemoryInline::FlatWriteFloat32((r30 + 76), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 64), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 60), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 72), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 68), f31.d);
}

loc_80515A34:
{
    r29 = (r29 + 1);
    r30 = (r30 + 24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(6));
}

loc_80515A40:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805159A0;
    }
}

loc_80515A44:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 52));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0001FFF gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80515624 func_80515624 preserves=false fpr_mask=0x80000000
