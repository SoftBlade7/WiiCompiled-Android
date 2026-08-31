#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80019708(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80019708;

loc_80019708:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1044381696;
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r3 & 2147483647);
}

loc_80019720:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80019740;
    }
}

loc_80019724:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80019734:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80019740;
    }
}

loc_80019738:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31584));
    goto loc_80019810;
}

loc_80019740:
{
    f8.d = (f1.d * f1.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -31584), 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -31536));
    r3 = 1070792704;
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r2 + -31544));
    r0 = (r3 + 13107);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -31552));
    f7.d = (f0.d * f8.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -31560));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -31568));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80019768:
{
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -31576));
    f6.d = (f6.d + f7.d);
    f6.d = (f8.d * f6.d);
    f5.d = (f5.d + f6.d);
    f5.d = (f8.d * f5.d);
    f4.d = (f4.d + f5.d);
    f4.d = (f8.d * f4.d);
    f3.d = (f3.d + f4.d);
    f3.d = (f8.d * f3.d);
    f0.d = (f0.d + f3.d);
    f3.d = (f8.d * f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800197BC;
    }
}

loc_80019798:
{
    f3.d = (f8.d * f3.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -31528));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -31584));
    f1.d = (f1.d * f2.d);
    f2.d = (f4.d * f8.d);
    f1.d = (f3.d - f1.d);
    f1.d = (f2.d - f1.d);
    f1.d = (f0.d - f1.d);
    goto loc_80019810;
}

loc_800197BC:
{
    r0 = 1072234496;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_800197C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800197D4;
    }
}

loc_800197C8:
{
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r2 + -31520));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    goto loc_800197E4;
}

loc_800197D4:
{
    r3 = (r4 + -2097152);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_800197E4:
{
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -31528));
    f3.d = (f8.d * f3.d);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f6.d = (f0.d * f8.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -31584));
    f0.d = (f1.d * f2.d);
    f2.d = (f6.d - f5.d);
    f1.d = (f4.d - f5.d);
    f0.d = (f3.d - f0.d);
    f0.d = (f2.d - f0.d);
    f1.d = (f1.d - f0.d);
}

loc_80019810:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x000001FF fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80019708 func_80019708 preserves=true fpr_mask=0x00000000
