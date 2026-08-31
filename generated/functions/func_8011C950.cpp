#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011C950(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8011C950;

loc_8011C950:
{
    r8 = MemoryInline::FlatRead8((r4 + 20));
    r0 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(2));
}

loc_8011C95C:
{
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r0));
    r8 = (r8 & 67);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_8011C964:
{
    MemoryInline::FlatWrite32((r4 + 32), r0);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r8));
    if (((cr & 0x02000000u) != 0)) {
        goto loc_return;
    }
}

loc_8011C970:
{
}

loc_8011C974:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8011C984;
    }
}

loc_8011C978:
{
    r0 = (r8 | 4);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    goto loc_8011C9AC;
}

loc_8011C984:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_8011C988:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011C998;
    }
}

loc_8011C98C:
{
    r0 = (r8 | 8);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    goto loc_8011C9AC;
}

loc_8011C998:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_return;
    }
}

loc_8011C99C:
{
    r0 = (r8 | 32);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
}

loc_8011C9AC:
{
}

loc_8011C9B0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8011C9C8;
    }
}

loc_8011C9B4:
{
}

loc_8011C9B8:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(1))) {
        goto loc_8011C9C8;
    }
}

loc_8011C9BC:
{
    r0 = MemoryInline::FlatRead8((r4 + 20));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
}

loc_8011C9C8:
{
    r6 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_8011C9D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011C9DC;
    }
}

loc_8011C9D8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8011C5B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_8011C9DC:
{
}

loc_8011C9E0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8011CA10;
    }
}

loc_8011C9E4:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWrite32((r4 + 36), r0);
    r0 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::FlatWrite32((r3 + 20), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011C9F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011CA00;
    }
}

loc_8011C9FC:
{
    MemoryInline::FlatWrite32((r3 + 24), r4);
}

loc_8011CA00:
{
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_8011CA10:
{
    r5 = MemoryInline::FlatRead32((r3 + 24));
}

loc_8011CA18:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8011CA20;
    }
}

loc_8011CA1C:
{
    MemoryInline::FlatWrite32((r5 + 36), r4);
}

loc_8011CA20:
{
    MemoryInline::FlatWrite32((r3 + 24), r4);
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 36), r0);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011CA34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011CA3C;
    }
}

loc_8011CA38:
{
    MemoryInline::FlatWrite32((r3 + 20), r4);
}

loc_8011CA3C:
{
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8011C950 func_8011C950 preserves=true fpr_mask=0x00000000
