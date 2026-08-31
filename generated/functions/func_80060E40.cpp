#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80060E40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80060E40;

loc_80060E40:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r5 = (r5_rot_0 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80060E44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80060E48:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80060E4C:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060EE8;
    }
}

loc_80060E54:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 128u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 128u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 0u, r3, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 8u, (r3 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 16u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r4 + 24));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 24u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r4 + 32));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 32u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r4 + 40));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 40u, (r3 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r4 + 48));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r3 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r4 + 56));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 56u, (r3 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r4 + 64));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r3 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r4 + 72));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 72u, (r3 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 80u, (r4 + 80));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r3 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 88u, (r4 + 88));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 88u, (r3 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 96u, (r4 + 96));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r3 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 104u, (r4 + 104));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 104u, (r3 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 112u, (r4 + 112));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r3 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 120u, (r4 + 120));
    r4 = (r4 + 128);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 120u, (r3 + 120), f0.d);
    r3 = (r3 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80060E54;
    }
}

loc_80060EE0:
{
    r5 = (r5 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80060EE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80060EE8:
{
    ctr = r5;
}

loc_80060EEC:
{
    f0.d = MemoryInline::FlatReadFloat64(r4);
    MemoryInline::FlatWriteFloat64(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + 8));
    MemoryInline::FlatWriteFloat64((r3 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + 16));
    MemoryInline::FlatWriteFloat64((r3 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + 24));
    r4 = (r4 + 32);
    MemoryInline::FlatWriteFloat64((r3 + 24), f0.d);
    r3 = (r3 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80060EEC;
    }
}

loc_80060F18:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80060E40 func_80060E40 preserves=true fpr_mask=0x00000000
