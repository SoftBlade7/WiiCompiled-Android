#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80539574(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80539674_loc_0 = 0;
    uint32_t addr_lfsx_805396D8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80539574;

loc_80539574:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80539598u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x805395A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80539404u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805395A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805395C4;
    }
}

loc_805395A8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_805395B8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(14405))) {
        goto loc_805395C4;
    }
}

loc_805395BC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 52), static_cast<uint8_t>(r0));
}

loc_805395C4:
{
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805395D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053962C;
    }
}

loc_805395D8:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead8((r5 + 29));
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead8((r4 + 36));
    r0 = (r0 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805395F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053962C;
    }
}

loc_805395F4:
{
    r0 = MemoryInline::FlatRead32((r4 + 2928));
    r3 = 0;
}

loc_80539600:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_80539610;
    }
}

loc_80539604:
{
}

loc_80539608:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_80539610;
    }
}

loc_8053960C:
{
    r3 = 1;
}

loc_80539610:
{
}

loc_80539614:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80539640;
    }
}

loc_80539618:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    // inline leaf 0x80656F00 (16 guest instruction(s))
}

loc_inl0_0x80656F00:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r5 = 1;
    r6 = 0;
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F28:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl0_0x80656F30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F34:
{
    r6 = 1;
}

loc_inl0_0x80656F38:
{
    r3 = r6;
}

loc_inl0_cont_80656F00:
{
    // end of inlined leaf 0x80656F00
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80539628:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80539640;
    }
}

loc_8053962C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80539640u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80539640:
{
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 536));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 68));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80539654:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053975C;
    }
}

loc_8053965C:
{
    r4 = MemoryInline::FlatRead8((r31 + 16));
    r0 = MemoryInline::FlatRead16((r31 + 14));
}

loc_80539668:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_80539734;
    }
}

loc_8053966C:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    addr_lfsx_80539674_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80539674_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8053967C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805396D4;
    }
}

loc_80539680:
{
}

loc_80539684:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(32))) {
        goto loc_805396A8;
    }
}

loc_80539688:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    goto loc_805396AC;
}

loc_805396A8:
{
    r0 = 0;
}

loc_805396AC:
{
}

loc_805396B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80539734;
    }
}

loc_805396B4:
{
}

loc_805396B8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(32))) {
        goto loc_80539734;
    }
}

loc_805396BC:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80539734;
}

loc_805396D4:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    addr_lfsx_805396D8_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_805396D8_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805396E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80539734;
    }
}

loc_805396E4:
{
}

loc_805396E8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(32))) {
        goto loc_8053970C;
    }
}

loc_805396EC:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    goto loc_80539710;
}

loc_8053970C:
{
    r0 = 0;
}

loc_80539710:
{
}

loc_80539714:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80539734;
    }
}

loc_80539718:
{
}

loc_8053971C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(32))) {
        goto loc_80539734;
    }
}

loc_80539720:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r3 & ~r0);
    MemoryInline::FlatWrite32((r31 + 8), r0);
}

loc_80539734:
{
    r4 = MemoryInline::FlatRead8((r31 + 16));
    r3 = MemoryInline::FlatRead16((r31 + 14));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r0));
    r4 = (r0 & 255);
    r0 = (r3 + 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80539750:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053975C;
    }
}

loc_80539754:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r0));
}

loc_8053975C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80539574 func_80539574 preserves=true fpr_mask=0x00000000
