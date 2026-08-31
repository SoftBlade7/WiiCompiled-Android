#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078371C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8078371C;

loc_8078371C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r31 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(-1));
}

loc_80783754:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807839E8;
    }
}

loc_80783758:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8078375C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807839E8;
    }
}

loc_80783760:
{
    r29 = 0x809C0000u;
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r29 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    // inline leaf 0x80590650 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80590650
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80783778:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80783780;
    }
}

loc_8078377C:
{
    goto loc_807839E8;
}

loc_80783780:
{
    r3 = MemoryInline::FlatRead32((r29 + 6392));
    r4 = r31;
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x80590100
    r4 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    r3 = MemoryInline::FlatRead32((r4 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_807837A4:
{
    r7 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783810;
    }
}

loc_807837D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807837EC;
    }
}

loc_807837D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_807837D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783808;
    }
}

loc_807837DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807837FC;
    }
}

loc_807837E0:
{
}

loc_807837E4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_807837FC;
    }
}

loc_807837E8:
{
    goto loc_80783810;
}

loc_807837EC:
{
}

loc_807837F0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(11))) {
        goto loc_80783810;
    }
}

loc_807837F4:
{
}

loc_807837F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(9))) {
        goto loc_80783808;
    }
}

loc_807837FC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
    goto loc_80783810;
}

loc_80783808:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 17), static_cast<uint8_t>(r0));
}

loc_80783810:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 18372));
    r3 = 0x809C0000u;
    r4 = r31;
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x80590100
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r28 = MemoryInline::FlatRead32((r3 + 8));
    r3 = r28;
    // inline leaf 0x805275EC (6 guest instruction(s))
}

loc_inl5_0x805275EC:
{
    r0 = (r3 + -24);
    r3 = 0;
}

loc_inl5_0x805275F8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(20))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x805275FC:
{
    r3 = 1;
    goto loc_inl5_cont_805275EC;
}

loc_inl5_return:
{
}

loc_inl5_cont_805275EC:
{
    // end of inlined leaf 0x805275EC
}

loc_8078384C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80783854;
    }
}

loc_80783850:
{
    r28 = 24;
}

loc_80783854:
{
    MemoryInline::FlatWrite32((r30 + 32), r28);
    r3 = 0x809C0000u;
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x80590100
    // inline leaf 0x80590A7C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590A7C
    MemoryInline::FlatWrite32((r30 + 36), r3);
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2960));
    r0 = (r0 & 4);
}

loc_80783880:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807838BC;
    }
}

loc_80783884:
{
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_8078388C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_807838BC;
    }
}

loc_80783890:
{
    r3 = 0x808D0000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + 5896);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x807838A8u:
        goto loc_807838A8;
        break;
    case 0x807838B4u:
        goto loc_807838B4;
        break;
    case 0x807838BCu:
        goto loc_807838BC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_807838A8:
{
    r0 = MemoryInline::FlatRead32((r4 + 2920));
    MemoryInline::FlatWrite32((r30 + 40), r0);
    goto loc_807838BC;
}

loc_807838B4:
{
    r0 = MemoryInline::FlatRead32((r4 + 2920));
    MemoryInline::FlatWrite32((r30 + 44), r0);
}

loc_807838BC:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r0 = (r31 * 240);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = (r3 + r0);
    r5 = MemoryInline::FlatRead8((r3 + 46));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_807838F0;
    }
}

loc_807838DC:
{
    r3 = 0x809C0000u;
    r0 = (r5 * 236);
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + r0);
    r4 = (r3 + 4);
}

loc_807838F0:
{
}

loc_807838F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80783978;
    }
}

loc_807838F8:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80783900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783918;
    }
}

loc_80783904:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80783914u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8078391C;
}

loc_80783918:
{
    r3 = -1;
}

loc_8078391C:
{
}

loc_80783920:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80783978;
    }
}

loc_80783924:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80783934:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783978;
    }
}

loc_80783938:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80783954;
    }
}

loc_8078393C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80783940:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783970;
    }
}

loc_80783944:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80783964;
    }
}

loc_80783948:
{
}

loc_8078394C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80783964;
    }
}

loc_80783950:
{
    goto loc_80783978;
}

loc_80783954:
{
}

loc_80783958:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(11))) {
        goto loc_80783978;
    }
}

loc_8078395C:
{
}

loc_80783960:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(9))) {
        goto loc_80783970;
    }
}

loc_80783964:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 48), static_cast<uint8_t>(r0));
    goto loc_80783978;
}

loc_80783970:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 49), static_cast<uint8_t>(r0));
}

loc_80783978:
{
    r5 = MemoryInline::FlatRead32((r1 + 16));
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWrite32((r30 + 52), r5);
    MemoryInline::FlatWrite32((r30 + 56), r4);
    MemoryInline::FlatWrite32((r30 + 60), r0);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807839A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807839E8;
    }
}

loc_807839A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807839AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807839C8;
    }
}

loc_807839B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807839B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807839C8;
    }
}

loc_807839B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_807839BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807839C8;
    }
}

loc_807839C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_807839C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807839E8;
    }
}

loc_807839C8:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 18372));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 28), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
}

loc_807839E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8078371C func_8078371C preserves=true fpr_mask=0x00000000
