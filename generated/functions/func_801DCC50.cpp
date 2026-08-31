#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DCC50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DCC50;

loc_801DCC50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DCC54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DCC60;
    }
}

loc_801DCC58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801DCC5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DCC68;
    }
}

loc_801DCC60:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_801DCC68:
{
    r6 = r3;
    r7 = 0;
    goto loc_801DCC94;
}

loc_801DCC74:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801DCCA0;
    }
}

loc_801DCC88:
{
    r4 = (r4 + 1);
    r7 = (r7 + 1);
    r6 = (r6 + 1);
}

loc_801DCC94:
{
    r0 = (r7 + 1);
}

loc_801DCC9C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r5))) {
        goto loc_801DCC74;
    }
}

loc_801DCCA0:
{
    r0 = (r7 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_801DCCA8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DCCBC;
    }
}

loc_801DCCAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801DCCB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DCCBC;
    }
}

loc_801DCCB4:
{
    r0 = 0;
    r3_addr_1 = (r3 + r7);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r0));
}

loc_801DCCBC:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DCC50 func_801DCC50 preserves=true fpr_mask=0x00000000
