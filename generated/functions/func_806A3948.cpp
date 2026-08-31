#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806A3948(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
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
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806A3948;

loc_806A3948:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead8((r3 + 37));
}

loc_806A396C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A397C;
    }
}

loc_806A3970:
{
    r0 = MemoryInline::FlatRead8((r3 + 39));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A3978:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A3AA8;
    }
}

loc_806A397C:
{
    r0 = MemoryInline::FlatRead8((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A3984:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A3AA8;
    }
}

loc_806A3988:
{
    r0 = MemoryInline::FlatRead8((r3 + 7));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A3990:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A3AA8;
    }
}

loc_806A3994:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 8656));
    r0 = MemoryInline::FlatRead8((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A39A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A39AC;
    }
}

loc_806A39A8:
{
    goto loc_806A3AA8;
}

loc_806A39AC:
{
    r29 = (r3 + 32);
    r30 = 8;
}

loc_806A39B4:
{
    r3 = MemoryInline::FlatRead32((r29 + 728));
}

loc_806A39BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806A3A34;
    }
}

loc_806A39C0:
{
    r3 = (r3 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl0_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x80037604;
    }
}

loc_inl0_0x800375FC:
{
    r0 = 0;
    goto loc_inl0_0x80037618;
}

loc_inl0_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
}

loc_inl0_0x80037618:
{
}

loc_inl0_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80037628;
    }
}

loc_inl0_0x80037620:
{
    r3 = r4;
    goto loc_inl0_cont_800375F0;
}

loc_inl0_0x80037628:
{
    r3 = 0;
}

loc_inl0_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_806A39CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806A39D8;
    }
}

loc_806A39D0:
{
    r3 = 0;
    goto loc_806A39DC;
}

loc_806A39D8:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_806A39DC:
{
}

loc_806A39E0:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_806A39F0;
    }
}

loc_806A39E8:
{
}

loc_806A39EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_806A39F4;
    }
}

loc_806A39F0:
{
    r0 = 1;
}

loc_806A39F4:
{
}

loc_806A39F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A3A34;
    }
}

loc_806A39FC:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & -1073741824);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -1);
    r0 = (r0 + r3);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2120));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A3A1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A3A34;
    }
}

loc_806A3A20:
{
    r3 = MemoryInline::FlatRead32((r29 + 728));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x806A3A34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806A3A34:
{
    r30 = (r30 + 1);
    r29 = (r29 + 4);
}

loc_806A3A40:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(12))) {
        goto loc_806A39B4;
    }
}

loc_806A3A44:
{
    r29 = (r31 + 32);
    r30 = 8;
}

loc_806A3A4C:
{
    r3 = MemoryInline::FlatRead32((r29 + 728));
}

loc_806A3A54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806A3A98;
    }
}

loc_806A3A58:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(30));
    r0 = (r0_rot_8 & -1073741824);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (r0 - r4);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -1);
    r0 = (r0 + r4);
    r4 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 2120));
}

loc_806A3A78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A3A98;
    }
}

loc_806A3A7C:
{
    r0 = MemoryInline::FlatRead8((r4 + 2413));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A3A84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A3A98;
    }
}

loc_806A3A88:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x806A3A98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806A3A98:
{
    r30 = (r30 + 1);
    r29 = (r29 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(12));
}

loc_806A3AA4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806A3A4C;
    }
}

loc_806A3AA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806A3948 func_806A3948 preserves=true fpr_mask=0x00000000
