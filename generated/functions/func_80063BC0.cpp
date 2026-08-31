#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80063BC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80063BC0;

loc_80063BC0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r7 = 0x802C0000u;
}

loc_80063BD0:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = (r7 + -32144);
    MemoryInline::FlatWriteRam32((r7 + -32144), r3);
    MemoryInline::FlatWriteRam32((r6 + 4), r4);
    MemoryInline::FlatWriteRam32((r6 + 8), r5);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80063BF8;
    }
}

loc_80063BE8:
{
    r4 = r3;
    r3 = 21;
    r5 = 48;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
}

loc_80063BF8:
{
    r3 = 0x802C0000u;
    r3 = (r3 + -32144);
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80063C08:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80063C18;
    }
}

loc_80063C0C:
{
    r3 = 22;
    r5 = 36;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
}

loc_80063C18:
{
    r3 = 0x802C0000u;
    r3 = (r3 + -32144);
    r4 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80063C28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063C38;
    }
}

loc_80063C2C:
{
    r3 = 23;
    r5 = 48;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
}

loc_80063C38:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000BB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80063BC0 func_80063BC0 preserves=true fpr_mask=0x00000000
