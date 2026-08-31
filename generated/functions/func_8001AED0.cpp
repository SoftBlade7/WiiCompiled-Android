#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001AED0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8001AED0;

loc_8001AED0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1044381696;
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 & 2147483647);
}

loc_8001AEE8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8001AF04;
    }
}

loc_8001AEEC:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001AEFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001AF04;
    }
}

loc_8001AF00:
{
    goto loc_8001AF88;
}

loc_8001AF04:
{
    f7.d = (f1.d * f1.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -31448), 0, 56u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -31416));
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -31424));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001AF14:
{
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -31432));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -31440));
    f6.d = (f0.d * f7.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -31448));
    f8.d = (f7.d * f1.d);
    f5.d = (f5.d + f6.d);
    f5.d = (f7.d * f5.d);
    f4.d = (f4.d + f5.d);
    f4.d = (f7.d * f4.d);
    f3.d = (f3.d + f4.d);
    f3.d = (f7.d * f3.d);
    f0.d = (f0.d + f3.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001AF60;
    }
}

loc_8001AF48:
{
    f2.d = (f7.d * f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r2 + -31408));
    f0.d = (f0.d + f2.d);
    f0.d = (f8.d * f0.d);
    f1.d = (f1.d + f0.d);
    goto loc_8001AF88;
}

loc_8001AF60:
{
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -31400));
    f3.d = (f8.d * f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r2 + -31408));
    f4.d = (f4.d * f2.d);
    f0.d = (f0.d * f8.d);
    f3.d = (f4.d - f3.d);
    f3.d = (f7.d * f3.d);
    f2.d = (f3.d - f2.d);
    f0.d = (f2.d - f0.d);
    f1.d = (f1.d - f0.d);
}

loc_8001AF88:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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

// RECOMP_GUEST_ABI gpr_read=0x0000000F gpr_write=0x00000013 gpr_return=0x00000010 fpr_read=0x000001FF fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8001AED0 func_8001AED0 preserves=true fpr_mask=0x00000000
