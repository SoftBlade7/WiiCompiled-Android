#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80095C30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80095C30;

loc_80095C30:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28384));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80095C40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80095C48;
    }
}

loc_80095C44:
{
    goto loc_80095D40;
}

loc_80095C48:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80095C54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80095C5C;
    }
}

loc_80095C58:
{
    goto loc_80095D40;
}

loc_80095C5C:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28356));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28360));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(32));
}

loc_80095C80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80095C98;
    }
}

loc_80095C84:
{
    r4 = 0x80250000u;
    r4 = (r4 + -27872);
    r4_addr_1 = (r4 + r5);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_80095CF8;
}

loc_80095C98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(64));
}

loc_80095C9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80095CB8;
    }
}

loc_80095CA0:
{
    r4 = 0x80250000u;
    r0 = (64 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(64) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4 = (r4 + -27872);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_80095CF8;
}

loc_80095CB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(96));
}

loc_80095CBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80095CDC;
    }
}

loc_80095CC0:
{
    r4 = 0x80250000u;
    r4 = (r4 + -27872);
    r4 = (r5 + r4);
    r0 = MemoryInline::FlatRead8((r4 + -64));
    r0 = (0 - r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_80095CF8;
}

loc_80095CDC:
{
    r0 = (r5 + -96);
    r4 = 0x80250000u;
    r0_subfic_ra_1 = r0;
    r0 = (32 - r0_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r0_subfic_ra_1) ? 1u : 0u) << 29);
    r4 = (r4 + -27872);
    r4_addr_3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_3);
    r0 = (0 - r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80095CF8:
{
    r4 = 1127219200;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -28368));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r0 = MemoryInline::FlatRead8((r3 + 12));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28352));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -28344));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_80095D40:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80095C30 func_80095C30 preserves=true fpr_mask=0x00000000
