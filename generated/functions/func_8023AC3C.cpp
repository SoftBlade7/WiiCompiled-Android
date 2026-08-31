#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023AC3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023AC3C;

loc_8023AC3C:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    r5 = 2;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r13 + -27736);
    MemoryInline::FlatWriteRam32((r1 + 156), r31);
    MemoryInline::FlatWriteRam32((r1 + 152), r30);
    r30 = r3;
    r4_addr_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8019C800u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023AC70:
{
    MemoryInline::FlatWrite32((r30 + 12), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023AC88;
    }
}

loc_8023AC78:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_8023ACF8;
}

loc_8023AC88:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r30 + 16));
    r5 = (r0 * 4608);
    r31 = (r5 + 24736);
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8019B884u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_8023ACA8:
{
    MemoryInline::FlatWrite32((r30 + 12), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023ACC8;
    }
}

loc_8023ACB0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8019CA80u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_8023ACF8;
}

loc_8023ACC8:
{
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8019CA80u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023ACD4:
{
    MemoryInline::FlatWrite32((r30 + 12), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023ACEC;
    }
}

loc_8023ACDC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_8023ACF8;
}

loc_8023ACEC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r0));
    r3 = 1;
}

loc_8023ACF8:
{
    r0 = MemoryInline::FlatRead32((r1 + 164));
    r31 = MemoryInline::FlatRead32((r1 + 156));
    r30 = MemoryInline::FlatRead32((r1 + 152));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000203A gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023AC3C func_8023AC3C preserves=true fpr_mask=0x00000000
