#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083EE1C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8083EE1C;

loc_8083EE1C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 0;
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x8083EE44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x8083EE48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8083EC28u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r7 = 0;
    r5 = 0;
    r4 = 0x809C0000u;
    goto loc_8083EE88;
}

loc_8083EE58:
{
    r3 = (r3 + r5);
    r6 = MemoryInline::FlatRead8((r3 + 40));
}

loc_8083EE64:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(255))) {
        goto loc_8083EE80;
    }
}

loc_8083EE68:
{
    r0 = (r7 + 1);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = (r0 & 255);
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3108), r6);
}

loc_8083EE80:
{
    r5 = (r5 + 2);
    r7 = (r7 + 1);
}

loc_8083EE88:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = 11;
    r6 = MemoryInline::FlatRead16((r3 + 38));
}

loc_8083EE98:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(11))) {
        goto loc_8083EEA0;
    }
}

loc_8083EE9C:
{
    r0 = r6;
}

loc_8083EEA0:
{
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_8083EEA8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8083EE58;
    }
}

loc_8083EEAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8083EE1C func_8083EE1C preserves=true fpr_mask=0x00000000
