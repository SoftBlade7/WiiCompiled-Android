#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017C514(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8017C514;

loc_8017C514:
{
}

loc_8017C518:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8017C7E0;
    }
}

loc_8017C51C:
{
    r0 = 37;
    r3 = (r30 + 112);
    r29 = 0;
    ctr = r0;
}

loc_8017C52C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8017C534:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017C548;
    }
}

loc_8017C538:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8017C540:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8017C548;
    }
}

loc_8017C544:
{
    goto loc_8017C578;
}

loc_8017C548:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r29 = (r29 + 1);
}

loc_8017C554:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017C568;
    }
}

loc_8017C558:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8017C560:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8017C568;
    }
}

loc_8017C564:
{
    goto loc_8017C578;
}

loc_8017C568:
{
    r3 = (r3 + 16);
    r29 = (r29 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C52C;
    }
}

loc_8017C574:
{
    r29 = -1;
}

loc_8017C578:
{
    r3 = 37;
    r5 = (r30 + 112);
    r0 = 1;
    r8 = 0;
    ctr = r3;
}

loc_8017C58C:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017C594:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C5A8;
    }
}

loc_8017C598:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017C5A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017C5A8;
    }
}

loc_8017C5A4:
{
    goto loc_8017C5D8;
}

loc_8017C5A8:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_8017C5B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C5C8;
    }
}

loc_8017C5B8:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017C5C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017C5C8;
    }
}

loc_8017C5C4:
{
    goto loc_8017C5D8;
}

loc_8017C5C8:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C58C;
    }
}

loc_8017C5D4:
{
    r8 = -1;
}

loc_8017C5D8:
{
    r3 = 37;
    r5 = (r30 + 112);
    r7 = 0;
    ctr = r3;
}

loc_8017C5E8:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017C5F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C604;
    }
}

loc_8017C5F4:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017C5FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017C604;
    }
}

loc_8017C600:
{
    goto loc_8017C634;
}

loc_8017C604:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_8017C610:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C624;
    }
}

loc_8017C614:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017C61C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017C624;
    }
}

loc_8017C620:
{
    goto loc_8017C634;
}

loc_8017C624:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C5E8;
    }
}

loc_8017C630:
{
    r7 = -1;
}

loc_8017C634:
{
    r3 = 37;
    r5 = (r30 + 112);
    r6 = 0;
    ctr = r3;
}

loc_8017C644:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017C64C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C660;
    }
}

loc_8017C650:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017C658:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017C660;
    }
}

loc_8017C65C:
{
    goto loc_8017C690;
}

loc_8017C660:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_8017C66C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C680;
    }
}

loc_8017C670:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017C678:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017C680;
    }
}

loc_8017C67C:
{
    goto loc_8017C690;
}

loc_8017C680:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C644;
    }
}

loc_8017C68C:
{
    r6 = -1;
}

loc_8017C690:
{
    r3 = 37;
    r9 = (r30 + 112);
    r5 = 0;
    ctr = r3;
}

loc_8017C6A0:
{
    r3 = MemoryInline::FlatRead32(r9);
}

loc_8017C6A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C6BC;
    }
}

loc_8017C6AC:
{
    r3 = MemoryInline::FlatRead32((r9 + 4));
}

loc_8017C6B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017C6BC;
    }
}

loc_8017C6B8:
{
    goto loc_8017C6EC;
}

loc_8017C6BC:
{
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_8017C6C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C6DC;
    }
}

loc_8017C6CC:
{
    r3 = MemoryInline::FlatRead32((r9 + 12));
}

loc_8017C6D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017C6DC;
    }
}

loc_8017C6D8:
{
    goto loc_8017C6EC;
}

loc_8017C6DC:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C6A0;
    }
}

loc_8017C6E8:
{
    r5 = -1;
}

loc_8017C6EC:
{
}

loc_8017C6F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017C754;
    }
}

loc_8017C6F4:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017C708:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017C754;
    }
}

loc_8017C70C:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017C720:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017C754;
    }
}

loc_8017C724:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017C738:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017C754;
    }
}

loc_8017C73C:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017C750:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8017C758;
    }
}

loc_8017C754:
{
    r0 = 0;
}

loc_8017C758:
{
}

loc_8017C75C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017C7D8;
    }
}

loc_8017C760:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r28;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl0_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl0_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl0_0x80173E54;
    }
}

loc_inl0_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl0_0x80173E58;
}

loc_inl0_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl0_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl0_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    r3 = 0;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 100));
    MemoryInline::FlatWrite32((r26 + 116), r29);
}

loc_8017C78C:
{
    MemoryInline::FlatWrite32((r26 + 108), r3);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_8017C7D0;
    }
}

loc_8017C794:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017C7A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017C7B8;
    }
}

loc_8017C7A8:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8017C7B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017C7B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017C7BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017C7C8;
    }
}

loc_8017C7C0:
{
    r3 = 4;
    ctx->lr = 0x8017C7C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80176D84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017C7C8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 100), r0);
}

loc_8017C7D0:
{
    r28 = 1;
    goto loc_8017D058;
}

loc_8017C7D8:
{
    MemoryInline::FlatWrite32((r26 + 108), r29);
    goto loc_8017D058;
}

loc_8017C7E0:
{
}

loc_8017C7E4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8017D058;
    }
}

loc_8017C7E8:
{
    r0 = 37;
    r3 = (r30 + 112);
    r29 = 0;
    ctr = r0;
}

loc_8017C7F8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8017C800:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017C814;
    }
}

loc_8017C804:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8017C80C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(19))) {
        goto loc_8017C814;
    }
}

loc_8017C810:
{
    goto loc_8017C844;
}

loc_8017C814:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r29 = (r29 + 1);
}

loc_8017C820:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8017C834;
    }
}

loc_8017C824:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8017C82C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(19))) {
        goto loc_8017C834;
    }
}

loc_8017C830:
{
    goto loc_8017C844;
}

loc_8017C834:
{
    r3 = (r3 + 16);
    r29 = (r29 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C7F8;
    }
}

loc_8017C840:
{
    r29 = -1;
}

loc_8017C844:
{
    r3 = 37;
    r5 = (r30 + 112);
    r0 = 1;
    r8 = 0;
    ctr = r3;
}

loc_8017C858:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017C860:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C874;
    }
}

loc_8017C864:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017C86C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017C874;
    }
}

loc_8017C870:
{
    goto loc_8017C8A4;
}

loc_8017C874:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_8017C880:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C894;
    }
}

loc_8017C884:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017C88C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8017C894;
    }
}

loc_8017C890:
{
    goto loc_8017C8A4;
}

loc_8017C894:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C858;
    }
}

loc_8017C8A0:
{
    r8 = -1;
}

loc_8017C8A4:
{
    r3 = 37;
    r5 = (r30 + 112);
    r7 = 0;
    ctr = r3;
}

loc_8017C8B4:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017C8BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C8D0;
    }
}

loc_8017C8C0:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017C8C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017C8D0;
    }
}

loc_8017C8CC:
{
    goto loc_8017C900;
}

loc_8017C8D0:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_8017C8DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C8F0;
    }
}

loc_8017C8E0:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017C8E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8017C8F0;
    }
}

loc_8017C8EC:
{
    goto loc_8017C900;
}

loc_8017C8F0:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C8B4;
    }
}

loc_8017C8FC:
{
    r7 = -1;
}

loc_8017C900:
{
    r3 = 37;
    r5 = (r30 + 112);
    r6 = 0;
    ctr = r3;
}

loc_8017C910:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_8017C918:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C92C;
    }
}

loc_8017C91C:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8017C924:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017C92C;
    }
}

loc_8017C928:
{
    goto loc_8017C95C;
}

loc_8017C92C:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_8017C938:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8017C94C;
    }
}

loc_8017C93C:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8017C944:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_8017C94C;
    }
}

loc_8017C948:
{
    goto loc_8017C95C;
}

loc_8017C94C:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C910;
    }
}

loc_8017C958:
{
    r6 = -1;
}

loc_8017C95C:
{
    r3 = 37;
    r9 = (r30 + 112);
    r5 = 0;
    ctr = r3;
}

loc_8017C96C:
{
    r3 = MemoryInline::FlatRead32(r9);
}

loc_8017C974:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C988;
    }
}

loc_8017C978:
{
    r3 = MemoryInline::FlatRead32((r9 + 4));
}

loc_8017C980:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017C988;
    }
}

loc_8017C984:
{
    goto loc_8017C9B8;
}

loc_8017C988:
{
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_8017C994:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8017C9A8;
    }
}

loc_8017C998:
{
    r3 = MemoryInline::FlatRead32((r9 + 12));
}

loc_8017C9A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8017C9A8;
    }
}

loc_8017C9A4:
{
    goto loc_8017C9B8;
}

loc_8017C9A8:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8017C96C;
    }
}

loc_8017C9B4:
{
    r5 = -1;
}

loc_8017C9B8:
{
}

loc_8017C9BC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8017CA20;
    }
}

loc_8017C9C0:
{
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_7 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017C9D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017CA20;
    }
}

loc_8017C9D8:
{
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017C9EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017CA20;
    }
}

loc_8017C9F0:
{
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r3 = (r3_rot_9 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017CA04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8017CA20;
    }
}

loc_8017CA08:
{
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_10 & -4);
    r3 = (r26 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 676));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017CA1C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8017CA24;
    }
}

loc_8017CA20:
{
    r0 = 0;
}

loc_8017CA24:
{
}

loc_8017CA28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017CAA4;
    }
}

loc_8017CA2C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r26 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 676));
    r3 = r28;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl1_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x80173E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x80173E54;
    }
}

loc_inl1_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl1_0x80173E58;
}

loc_inl1_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl1_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl1_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    r3 = 0;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r26 + 100));
    MemoryInline::FlatWrite32((r26 + 116), r29);
}

loc_8017CA58:
{
    MemoryInline::FlatWrite32((r26 + 108), r3);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_8017CA9C;
    }
}

loc_8017CA60:
{
    r4 = MemoryInline::FlatRead32((r26 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017CA70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017CA84;
    }
}

loc_8017CA74:
{
    r3 = 5;
    r4 = 4;
    ctr = r12;
    ctx->lr = 0x8017CA84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CA84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8017CA88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017CA94;
    }
}

loc_8017CA8C:
{
    r3 = 4;
    ctx->lr = 0x8017CA94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80176D84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8017CA94:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 100), r0);
}

loc_8017CA9C:
{
    r28 = 1;
    goto loc_8017D058;
}

loc_8017CAA4:
{
    MemoryInline::FlatWrite32((r26 + 108), r29);
}

loc_8017D058:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
    r4 = (r3 + 1);
}

loc_8017D064:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(r4))) {
        goto loc_8017D074;
    }
}

loc_8017D068:
{
    r0 = (r3 + 9);
}

loc_8017D070:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(r0))) {
        goto loc_8017D0A8;
    }
}

loc_8017D074:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    r3 = MemoryInline::FlatRead32((r26 + 8));
    r0 = (r3 + 9);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    goto loc_8017D0BC;
}

loc_8017D0A8:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 28), r0);
}

loc_8017D0BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8017D0C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017D118;
    }
}

loc_8017D0C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8017D0C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017D118;
    }
}

loc_8017D0CC:
{
    r0 = MemoryInline::FlatRead32(r27);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r4 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 608));
    r0 = MemoryInline::FlatRead8((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017D0E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017D118;
    }
}

loc_8017D0E8:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 468));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 744));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8017D0F4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017D118;
    }
}

loc_8017D0FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 848));
    MemoryInline::FlatWriteFloat32((r4 + 452), f0.d);
    r0 = MemoryInline::FlatRead32(r27);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r26 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 608));
    ctx->lr = 0x8017D118u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80175ED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8017D118:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8017C514 func_8017C514 preserves=true fpr_mask=0x00000000
