#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CDF14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_807CDF14;

loc_807CDF14:
{
    r5 = MemoryInline::FlatRead32((r3 + 676));
    r6 = MemoryInline::FlatRead32((r3 + 740));
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 12u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 592));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDF28:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807CDF3C;
    }
}

loc_807CDF2C:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 600));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDF38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CDF90;
    }
}

loc_807CDF3C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 780));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 812));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDF48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CDF50;
    }
}

loc_807CDF4C:
{
    MemoryInline::FlatWriteFloat32((r3 + 812), f1.d);
}

loc_807CDF50:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 788));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 820));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDF5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CDF64;
    }
}

loc_807CDF60:
{
    MemoryInline::FlatWriteFloat32((r3 + 820), f1.d);
}

loc_807CDF64:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1204));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1244));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDF70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CDF78;
    }
}

loc_807CDF74:
{
    MemoryInline::FlatWriteFloat32((r3 + 1244), f1.d);
}

loc_807CDF78:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1208));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1248));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDF84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CE010;
    }
}

loc_807CDF88:
{
    MemoryInline::FlatWriteFloat32((r3 + 1248), f1.d);
    goto loc_807CE010;
}

loc_807CDF90:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 812));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28924));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDFA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CDFB0;
    }
}

loc_807CDFA4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 812), f0.d);
}

loc_807CDFB0:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 820));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28924));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDFC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CDFD0;
    }
}

loc_807CDFC4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 820), f0.d);
}

loc_807CDFD0:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1244));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28924));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CDFE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CDFF0;
    }
}

loc_807CDFE4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1244), f0.d);
}

loc_807CDFF0:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1248));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28924));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE000:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CE010;
    }
}

loc_807CE004:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1248), f0.d);
}

loc_807CE010:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 596));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE01C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807CE030;
    }
}

loc_807CE020:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 604));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE02C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE084;
    }
}

loc_807CE030:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 780));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 808));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE03C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE044;
    }
}

loc_807CE040:
{
    MemoryInline::FlatWriteFloat32((r3 + 808), f1.d);
}

loc_807CE044:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 788));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 816));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE050:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE058;
    }
}

loc_807CE054:
{
    MemoryInline::FlatWriteFloat32((r3 + 816), f1.d);
}

loc_807CE058:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1204));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1236));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE064:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE06C;
    }
}

loc_807CE068:
{
    MemoryInline::FlatWriteFloat32((r3 + 1236), f1.d);
}

loc_807CE06C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1208));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1240));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE078:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE104;
    }
}

loc_807CE07C:
{
    MemoryInline::FlatWriteFloat32((r3 + 1240), f1.d);
    goto loc_807CE104;
}

loc_807CE084:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 808));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28920));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE094:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE0A4;
    }
}

loc_807CE098:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 808), f0.d);
}

loc_807CE0A4:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 816));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28920));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE0B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE0C4;
    }
}

loc_807CE0B8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 816), f0.d);
}

loc_807CE0C4:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1236));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28920));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE0D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE0E4;
    }
}

loc_807CE0D8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1236), f0.d);
}

loc_807CE0E4:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1240));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28920));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE0F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE104;
    }
}

loc_807CE0F8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1240), f0.d);
}

loc_807CE104:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 592));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CE110:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807CE120;
    }
}

loc_807CE114:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 596));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CE11C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE14C;
    }
}

loc_807CE120:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 776));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 800));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE12C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE134;
    }
}

loc_807CE130:
{
    MemoryInline::FlatWriteFloat32((r3 + 800), f1.d);
}

loc_807CE134:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 784));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 804));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE140:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_807CE144:
{
    MemoryInline::FlatWriteFloat32((r3 + 804), f1.d);
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_807CE14C:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 800));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28920));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE15C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE16C;
    }
}

loc_807CE160:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 800), f0.d);
}

loc_807CE16C:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 804));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28920));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807CE17C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_807CE180:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 804), f0.d);
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000070 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807CDF14 func_807CDF14 preserves=true fpr_mask=0x00000000
