#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DA0E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DA0E0;

loc_801DA0E0:
{
    r6 = 0;
    r7 = r3;
    goto loc_801DA0F4;
}

loc_801DA0EC:
{
    r7 = (r7 + 1);
    r6 = (r6 + 1);
}

loc_801DA0F4:
{
    r0 = MemoryInline::FlatRead8(r7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801DA0EC;
    }
}

loc_801DA100:
{
    r7 = (r3 + r6);
    r9 = 0;
    goto loc_801DA11C;
}

loc_801DA10C:
{
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r8));
    r7 = (r7 + 1);
    r9 = (r9 + 1);
    r4 = (r4 + 1);
}

loc_801DA11C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(r5));
}

loc_801DA120:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DA130;
    }
}

loc_801DA124:
{
    r8 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DA10C;
    }
}

loc_801DA130:
{
    r0 = (r6 + r9);
    r4 = 0;
    r3_addr_0 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_0, static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003D1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DA0E0 func_801DA0E0 preserves=true fpr_mask=0x00000000
