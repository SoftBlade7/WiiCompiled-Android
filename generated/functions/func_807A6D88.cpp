#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A6D88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A6D88;

loc_807A6D88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 1;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    r4 = 0;
    ctx->lr = 0x807A6DB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079D920u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807A6DB4:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_807A6E54;
    }
}

loc_807A6DB8:
{
    r6 = MemoryInline::FlatRead32((r31 + 124));
    r4 = 0;
    r5 = 0;
    r0 = (r6 & 32);
}

loc_807A6DC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A6DF4;
    }
}

loc_807A6DCC:
{
    r0 = (r6 & 1);
}

loc_807A6DD0:
{
    r3 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A6DE4;
    }
}

loc_807A6DD8:
{
    r0 = MemoryInline::FlatRead32((r31 + 120));
    r0 = (r0 & 939524096);
}

loc_807A6DE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A6DE8;
    }
}

loc_807A6DE4:
{
    r3 = 1;
}

loc_807A6DE8:
{
}

loc_807A6DEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807A6DF4;
    }
}

loc_807A6DF0:
{
    r5 = 1;
}

loc_807A6DF4:
{
}

loc_807A6DF8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_807A6E08;
    }
}

loc_807A6DFC:
{
    r0 = (r6 & 18);
}

loc_807A6E00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A6E08;
    }
}

loc_807A6E04:
{
    r4 = 1;
}

loc_807A6E08:
{
}

loc_807A6E0C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807A6E54;
    }
}

loc_807A6E10:
{
    r0 = MemoryInline::FlatRead32((r31 + 120));
    r0 = (r0 & 14680064);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A6E18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A6E24;
    }
}

loc_807A6E1C:
{
    r3 = 0;
    goto loc_807A6EB0;
}

loc_807A6E24:
{
    r0 = MemoryInline::FlatRead32((r31 + 120));
    r5 = 0x80240000u;
    r3 = 1;
    r0 = (r0 | 8388608);
    MemoryInline::FlatWrite32((r31 + 120), r0);
    r5 = (r5 + 28832);
    r4 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r31 + 364), r0);
    MemoryInline::FlatWrite32((r31 + 360), r4);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r31 + 368), r0);
    goto loc_807A6EB0;
}

loc_807A6E54:
{
    r0 = MemoryInline::FlatRead32((r31 + 120));
    r0 = (r0 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A6E5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A6E68;
    }
}

loc_807A6E60:
{
    r3 = 0;
    goto loc_807A6EB0;
}

loc_807A6E68:
{
    r5 = 0x808D0000u;
    r5 = (r5 + 7372);
    r4 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A6E94;
    }
}

loc_807A6E88:
{
    MemoryInline::FlatWrite32((r31 + 360), r4);
    MemoryInline::FlatWrite32((r31 + 364), r3);
    MemoryInline::FlatWrite32((r31 + 368), r0);
}

loc_807A6E94:
{
    r4 = MemoryInline::FlatRead32((r31 + 116));
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r31 + 120));
    r4 = (r4 | 2);
    MemoryInline::FlatWrite32((r31 + 116), r4);
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r31 + 120), r0);
}

loc_807A6EB0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A6D88 func_807A6D88 preserves=true fpr_mask=0x00000000
