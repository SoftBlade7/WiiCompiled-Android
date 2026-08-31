#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E3420(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stbux_801E34AC_loc_0 = 0;
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

    goto loc_801E3420;

loc_801E3420:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0;
    r5 = 1024;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = MemoryInline::FlatRead32((r13 + -24384));
    r3 = r30;
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
    r3 = r30;
    r4 = (r13 + -28092);
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
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r30 = (r30 + 6);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = 1;
    r0 = (r0 & 1048576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E3470:
{
    r0 = (r3 + 6);
    MemoryInline::FlatWrite32((r31 + 48), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E3480;
    }
}

loc_801E347C:
{
    r4 = 2;
}

loc_801E3480:
{
    r5 = r30;
    r3 = (r31 + 32);
    r7 = (r1 + 8);
    r6 = 1014;
    ctx->lr = 0x801E3494u;
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

loc_801E3498:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801E34A0;
    }
}

loc_801E349C:
{
    goto loc_801E3508;
}

loc_801E34A0:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r4 = 13;
    r0 = 10;
    addr_stbux_801E34AC_loc_0 = (r30 + r5);
    MemoryInline::FlatWrite8(addr_stbux_801E34AC_loc_0, static_cast<uint8_t>(r4));
    r30 = addr_stbux_801E34AC_loc_0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (1014 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1014) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r30 = (r4 + 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E34C4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801E34D0;
    }
}

loc_801E34C8:
{
    r3 = -11;
    goto loc_801E3508;
}

loc_801E34D0:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801E3508;
    }
}

loc_801E34D4:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    r4 = r30;
    r5 = MemoryInline::FlatRead32((r13 + -24352));
    ctx->lr = 0x801E34E4u;
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

loc_801E34E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E3508;
    }
}

loc_801E34EC:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r0 = MemoryInline::FlatRead32((r31 + 48));
    r5 = (r4 + r30);
    r4 = (r5 - r0);
    MemoryInline::FlatWrite32((r31 + 8), r5);
    r0 = (r4 + -2);
    MemoryInline::FlatWrite32((r31 + 52), r0);
}

loc_801E3508:
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
// RECOMP_REGISTRATION base 0x801E3420 func_801E3420 preserves=true fpr_mask=0x00000000
