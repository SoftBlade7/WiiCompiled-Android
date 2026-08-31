#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF608(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800CF608;

loc_800CF608:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CF614:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CF630;
    }
}

loc_800CF628:
{
    r3 = 0;
    goto loc_800CF744;
}

loc_800CF630:
{
    r4 = 0x80270000u;
    r5 = r30;
    r4 = (r4 + 23768);
    r3 = 2;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CF648u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800CF64C:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(7))) {
        goto loc_800CF6A0;
    }
}

loc_800CF650:
{
    r3 = 0x80270000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 23800);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800CF6A0u:
        goto loc_800CF6A0;
        break;
    case 0x800CF668u:
        goto loc_800CF668;
        break;
    case 0x800CF674u:
        goto loc_800CF674;
        break;
    case 0x800CF680u:
        goto loc_800CF680;
        break;
    case 0x800CF68Cu:
        goto loc_800CF68C;
        break;
    case 0x800CF698u:
        goto loc_800CF698;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800CF668:
{
    r31 = 6;
    r3 = -50;
    goto loc_800CF6A0;
}

loc_800CF674:
{
    r31 = 6;
    r3 = -30;
    goto loc_800CF6A0;
}

loc_800CF680:
{
    r31 = 6;
    r3 = -20;
    goto loc_800CF6A0;
}

loc_800CF68C:
{
    r31 = 6;
    r3 = -40;
    goto loc_800CF6A0;
}

loc_800CF698:
{
    r31 = 6;
    r3 = -70;
}

loc_800CF6A0:
{
    r0 = MemoryInline::FlatRead32((r13 + -26924));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800CF6A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CF740;
    }
}

loc_800CF6AC:
{
    r0 = MemoryInline::FlatRead32((r13 + -26928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800CF6B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CF740;
    }
}

loc_800CF6B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800CF6BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CF740;
    }
}

loc_800CF6C0:
{
    r4 = (r3 + -65536);
    r3 = r31;
    r4 = (r4 + -26464);
    // inline leaf 0x800CCC68 (6 guest instruction(s))
}

loc_inl0_0x800CCC68:
{
    r0 = MemoryInline::FlatRead32((r13 + -26968));
}

loc_inl0_0x800CCC70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800CCC74:
{
    MemoryInline::FlatWrite32((r13 + -26968), r3);
    MemoryInline::FlatWrite32((r13 + -26964), r4);
    goto loc_inl0_cont_800CCC68;
}

loc_inl0_return:
{
}

loc_inl0_cont_800CCC68:
{
    // end of inlined leaf 0x800CCC68
    r0 = MemoryInline::FlatRead32((r13 + -26920));
}

loc_800CF6D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_800CF6E8;
    }
}

loc_800CF6DC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -26916), r0);
    goto loc_800CF708;
}

loc_800CF6E8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26912));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800CF6F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CF708;
    }
}

loc_800CF6F4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -26912), r0);
    ctx->lr = 0x800CF700u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80117F6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26912), r0);
}

loc_800CF708:
{
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26924), r0);
}

loc_800CF718:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800CF720;
    }
}

loc_800CF71C:
{
    MemoryInline::FlatWrite32((r3 + 36), r0);
}

loc_800CF720:
{
    r4 = MemoryInline::FlatRead32((r13 + -26928));
    r12 = MemoryInline::FlatRead32((r4 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_800CF72C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CF740;
    }
}

loc_800CF730:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + 84));
    ctr = r12;
    ctx->lr = 0x800CF740u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800CF740:
{
    r3 = r30;
}

loc_800CF744:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800CF608 func_800CF608 preserves=true fpr_mask=0x00000000
