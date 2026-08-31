#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A3178(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A3178;

loc_807A3178:
{
    r4 = MemoryInline::FlatRead32((r3 + 120));
    r5 = 0;
    r0 = (r4 & 268435456);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A3184:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A3190;
    }
}

loc_807A3188:
{
    r5 = 1;
    goto loc_807A319C;
}

loc_807A3190:
{
    r0 = (r4 & 536870912);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A3194:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A319C;
    }
}

loc_807A3198:
{
    r5 = 2;
}

loc_807A319C:
{
    r0 = MemoryInline::FlatRead8((r3 + 108));
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + 13848));
    r4 = r3;
    r0 = (r0 * 584);
    r3 = MemoryInline::FlatRead32((r6 + 20));
    r3 = (r3 + r0);
    r3 = (r3 + 180);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80795848u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A3178 func_807A3178 preserves=true fpr_mask=0x00000000
