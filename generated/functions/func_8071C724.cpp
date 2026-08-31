#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071C724(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071C724;

loc_8071C724:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r3 = r6;
    // inline leaf 0x8071DB08 (13 guest instruction(s))
}

loc_inl0_0x8071DB08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl0_0x8071DB0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl0_0x8071DB18;
    }
}

loc_inl0_0x8071DB10:
{
    r4 = (r4 + 128);
    goto loc_inl0_0x8071DB24;
}

loc_inl0_0x8071DB18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(128));
}

loc_inl0_0x8071DB1C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl0_0x8071DB24;
    }
}

loc_inl0_0x8071DB20:
{
    r4 = (r4 + -128);
}

loc_inl0_0x8071DB24:
{
    r0 = (r4 * 12);
    r4 = MemoryInline::FlatRead32((r3 + 36));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_inl0_cont_8071DB08:
{
    // end of inlined leaf 0x8071DB08
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r30 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8071C3FCu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8071C3FCu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
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
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000A gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x0000001D fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071C724 func_8071C724 preserves=true fpr_mask=0x00000000
