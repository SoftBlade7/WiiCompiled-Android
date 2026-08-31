#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801500A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801500A0;

loc_801500A0:
{
    r4 = 0x80340000u;
    r0 = 2;
    r4 = (r4 + -27840);
    r3 = 0;
    r5 = (r4 + 8);
    r6 = 0;
    ctr = r0;
}

loc_801500BC:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_801500C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80150118;
    }
}

loc_801500C8:
{
    r4 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801500D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801500E0;
    }
}

loc_801500D4:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_801500DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801500E8;
    }
}

loc_801500E0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801500E8:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_801500F0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80150118;
    }
}

loc_801500F4:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_801500FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80150118;
    }
}

loc_80150100:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r4 + -7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8015010C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80150118;
    }
}

loc_80150110:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80150118:
{
    r0 = MemoryInline::FlatRead8((r5 + 92));
    r6 = (r6 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80150124:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80150178;
    }
}

loc_80150128:
{
    r4 = MemoryInline::FlatRead32((r5 + 100));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80150130:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80150140;
    }
}

loc_80150134:
{
    r0 = MemoryInline::FlatRead32((r5 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8015013C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80150148;
    }
}

loc_80150140:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80150148:
{
    r0 = MemoryInline::FlatRead32((r5 + 104));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80150150:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80150178;
    }
}

loc_80150154:
{
    r0 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015015C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80150178;
    }
}

loc_80150160:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r4 + -7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8015016C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80150178;
    }
}

loc_80150170:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80150178:
{
    r6 = (r6 + 1);
    r5 = (r5 + 184);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801500BC;
    }
}

loc_80150184:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000071 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801500A0 func_801500A0 preserves=true fpr_mask=0x00000000
