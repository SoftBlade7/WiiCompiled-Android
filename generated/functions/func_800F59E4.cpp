#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F59E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F59E4;

loc_800F59E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x802F0000u;
    r31 = (r31 + 9280);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F5A04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F5A10;
    }
}

loc_800F5A08:
{
    r3 = 0;
    goto loc_800F5A58;
}

loc_800F5A10:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r5 = 0x800F0000u;
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r5 = (r5 + 18620);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r4));
    r4 = (r1 + 8);
    r6 = 0;
    r7 = 0;
    ctx->lr = 0x800F5A34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EF9F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_800F5A38:
{
    r4 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F5A54;
    }
}

loc_800F5A40:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl0_0x800EF4B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl0_0x800EF4B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl0_0x800EF4C4;
    }
}

loc_inl0_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_inl0_0x800EF4C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl0_0x800EF4CC;
    }
}

loc_inl0_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl0_cont_800EF4B0;
}

loc_inl0_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl0_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // inline leaf 0x8010ACE4 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 88));
    r0 = MemoryInline::FlatRead32((r3 + 84));
    r3 = (r0 - r4);
    // end of inlined leaf 0x8010ACE4
    goto loc_800F5A58;
}

loc_800F5A54:
{
    r3 = 0;
}

loc_800F5A58:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F59E4 func_800F59E4 preserves=true fpr_mask=0x00000000
