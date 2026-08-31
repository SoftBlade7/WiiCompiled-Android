#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801677F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_subfic_ra_0 = 0;
    uint32_t r1_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801677F0;

loc_801677F0:
{
    r11 = (r1 & 31);
    r12 = r1;
    r11_subfic_ra_0 = r11;
    r11 = (-320 - r11_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-320) >= static_cast<uint32_t>(r11_subfic_ra_0) ? 1u : 0u) << 29);
    r1_addr_0 = (r1 + r11);
    MemoryInline::FlatWrite32(r1_addr_0, r1);
    r1 = r1_addr_0;
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r12 + 4), r0);
    r7 = (r1 + 240);
    r11 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r12 + -4), r31);
    r31 = r6;
    r12 = (r1 + 64);
    r10 = MemoryInline::FlatRead32((r13 + -29432));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_80167824:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80167834;
    }
}

loc_80167828:
{
    r8 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r8));
}

loc_80167830:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016783C;
    }
}

loc_80167834:
{
    r3 = -1017;
    goto loc_801678EC;
}

loc_8016783C:
{
    r0 = (r5 & 31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80167840:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016784C;
    }
}

loc_80167844:
{
    r3 = -1017;
    goto loc_801678EC;
}

loc_8016784C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
}

loc_80167850:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016789C;
    }
}

loc_8016785C:
{
    r5 = 8;
    r0 = 4;
    MemoryInline::FlatWriteRam32((r1 + 244), r5);
    r3 = r10;
    r4 = 20;
    r5 = 1;
    MemoryInline::FlatWriteRam32((r1 + 240), r11);
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 248), r12);
    MemoryInline::FlatWriteRam32((r1 + 252), r0);
    ctx->lr = 0x80167888u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801945E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8016788C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801678EC;
    }
}

loc_80167890:
{
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_801678EC;
}

loc_8016789C:
{
    r9 = MemoryInline::FlatRead32(r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_801678A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801678B0;
    }
}

loc_801678A8:
{
    r3 = -1017;
    goto loc_801678EC;
}

loc_801678B0:
{
    r8 = 8;
    r0 = 4;
    MemoryInline::FlatWriteRam32((r1 + 256), r5);
    r3 = r10;
    r4 = 21;
    r5 = 2;
    MemoryInline::FlatWriteRam32((r1 + 64), r9);
    MemoryInline::FlatWriteRam32((r1 + 240), r11);
    MemoryInline::FlatWriteRam32((r1 + 244), r8);
    MemoryInline::FlatWriteRam32((r1 + 248), r12);
    MemoryInline::FlatWriteRam32((r1 + 252), r0);
    r0 = MemoryInline::FlatRead32(r6);
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    ctx->lr = 0x801678ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801945E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801678EC:
{
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r31 = MemoryInline::FlatRead32((r10 + -4));
    ctx->lr = r0;
    r1 = r10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801677F0 func_801677F0 preserves=true fpr_mask=0x00000000
