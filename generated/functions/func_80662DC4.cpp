#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80662DC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80662DC4;

loc_80662DC4:
{
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = MemoryInline::FlatRead16((r6 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80662DD4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80662DF4;
    }
}

loc_80662DD8:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r6 + r0);
    r4 = (r4 + 56);
    goto loc_80662DF8;
}

loc_80662DF4:
{
    r4 = 0;
}

loc_80662DF8:
{
    r4 = (r4 + 65536);
    r0 = MemoryInline::FlatRead16((r4 + -28640));
    MemoryInline::FlatWrite16((r3 + 194), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000049 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80662DC4 func_80662DC4 preserves=true fpr_mask=0x00000000
