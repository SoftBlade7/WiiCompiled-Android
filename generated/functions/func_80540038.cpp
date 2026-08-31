#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80540038(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80540038;

loc_80540038:
{
    r4 = 0x809C0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(6));
}

loc_80540040:
{
    r0 = (r3 * 84);
    r4 = MemoryInline::FlatRead32((r4 + -10440));
    r6 = (r4 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054005C;
    }
}

loc_80540050:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_80540054:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80540070;
    }
}

loc_80540058:
{
    goto loc_80540088;
}

loc_8054005C:
{
    r3 = MemoryInline::FlatRead32((r6 + 828));
    r4 = (r6 + 836);
    r5 = MemoryInline::FlatRead32((r6 + 832));
    r6 = MemoryInline::FlatRead32((r6 + 900));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80518FA4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80540070:
{
    r3 = MemoryInline::FlatRead32((r6 + 824));
    r4 = (r6 + 836);
    r5 = MemoryInline::FlatRead32((r6 + 900));
    r7 = 0;
    r6 = MemoryInline::FlatRead32((r6 + 904));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052A954u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80540088:
{
    r3 = MemoryInline::FlatRead32((r6 + 824));
    r4 = (r6 + 836);
    r5 = MemoryInline::FlatRead32((r6 + 900));
    r6 = 0;
    r7 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052A954u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF5F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80540038 func_80540038 preserves=true fpr_mask=0x00000000
