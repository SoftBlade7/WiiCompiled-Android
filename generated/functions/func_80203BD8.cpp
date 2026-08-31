#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80203BD8(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80203BD8;

loc_80203BD8:
{
    r6 = 0;
    r7 = 0;
    goto loc_80203C28;
}

loc_80203BE4:
{
}

loc_80203BE8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(8))) {
        goto loc_80203C14;
    }
}

loc_80203BEC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80203BF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(32))) {
        goto loc_80203C10;
    }
}

loc_80203BF8:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_80203C00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(32))) {
        goto loc_80203C10;
    }
}

loc_80203C04:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_80203C0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_80203C14;
    }
}

loc_80203C10:
{
    r7 = (r7 + 1);
}

loc_80203C14:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80203C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_80203C24;
    }
}

loc_80203C20:
{
    r7 = (r7 + 1);
}

loc_80203C24:
{
    r6 = (r6 + 1);
}

loc_80203C28:
{
    r3_addr_2 = (r3 + r6);
    r5 = MemoryInline::FlatRead8(r3_addr_2);
    r4 = (r3 + r6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80203BE4;
    }
}

loc_80203C38:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80203BD8 func_80203BD8 preserves=true fpr_mask=0x00000000
