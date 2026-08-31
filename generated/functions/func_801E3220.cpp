#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E3220(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stbux_801E32A4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E3220;

loc_801E3220:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0;
    r5 = 1024;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r13 + -24384));
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801DA030u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x802A0000u;
    r3 = r31;
    r4 = (r4 + 8064);
    r5 = 1022;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801DA0E0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r31 = (r31 + 11);
    r4 = 1;
    r0 = (r0 & 1048576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E3270:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E3278;
    }
}

loc_801E3274:
{
    r4 = 2;
}

loc_801E3278:
{
    r5 = r31;
    r3 = (r30 + 32);
    r7 = (r1 + 8);
    r6 = 1009;
    ctx->lr = 0x801E328Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801E3110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E3290:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801E3298;
    }
}

loc_801E3294:
{
    goto loc_801E32F0;
}

loc_801E3298:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r4 = 13;
    r0 = 10;
    addr_stbux_801E32A4_loc_0 = (r31 + r5);
    MemoryInline::FlatWrite8(addr_stbux_801E32A4_loc_0, static_cast<uint8_t>(r4));
    r31 = addr_stbux_801E32A4_loc_0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (1009 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1009) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r31 = (r4 + 13);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E32BC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801E32C8;
    }
}

loc_801E32C0:
{
    r3 = -11;
    goto loc_801E32F0;
}

loc_801E32C8:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801E32F0;
    }
}

loc_801E32CC:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    r4 = r31;
    r5 = MemoryInline::FlatRead32((r13 + -24352));
    ctx->lr = 0x801E32DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801DB514u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E32E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E32F0;
    }
}

loc_801E32E4:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_801E32F0:
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
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801E3220 func_801E3220 preserves=true fpr_mask=0x00000000
