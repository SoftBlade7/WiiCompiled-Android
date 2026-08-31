#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071D034(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071D034;

loc_8071D034:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r30 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r5 = MemoryInline::FlatRead32((r30 + 16));
    r4 = MemoryInline::FlatRead32((r3 + 4));
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
    r3 = MemoryInline::FlatRead32((r29 + 8));
    ctx->lr = 0x8071D088u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8071C978u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r29 + 12), static_cast<uint8_t>(r3));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC007CA gpr_write=0xFFC00FFB gpr_return=0x00000018 fpr_read=0xF800001D fpr_write=0xF800001F fpr_return=0x00000002 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8071D034 func_8071D034 preserves=true fpr_mask=0x00000000
