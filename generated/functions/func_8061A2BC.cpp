#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061A2BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8061A2BC;

loc_8061A2BC:
{
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 31488));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8061A2CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061A2D8;
    }
}

loc_8061A2D0:
{
    r3 = 0;
    goto loc_8061A324;
}

loc_8061A2D8:
{
    f4.d = MemoryInline::FlatReadFloat32((r3 + 16));
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 31492));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f1.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8061A308:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061A314;
    }
}

loc_8061A30C:
{
    r3 = 0;
    goto loc_8061A324;
}

loc_8061A314:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(100));
}

loc_8061A318:
{
    r3 = 99;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061A324;
    }
}

loc_8061A320:
{
    r3 = (r0 & 255);
}

loc_8061A324:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8061A2BC func_8061A2BC preserves=true fpr_mask=0x00000000
