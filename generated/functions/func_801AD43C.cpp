#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AD43C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AD43C;

loc_801AD43C:
{
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 164), r29);
    r29 = r3;
    r3 = (r1 + 84);
    MemoryInline::FlatWriteRam32((r1 + 160), r28);
    r28 = r4;
    ctx->lr = 0x801AD458u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019E40Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AD45C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AD468;
    }
}

loc_801AD460:
{
    r3 = 0;
    goto loc_801AD51C;
}

loc_801AD468:
{
    r3 = (r1 + 84);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8019C380u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AD478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AD484;
    }
}

loc_801AD47C:
{
    r3 = 0;
    goto loc_801AD51C;
}

loc_801AD484:
{
    r31 = MemoryInline::FlatRead16((r1 + 12));
}

loc_801AD48C:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(2))) {
        goto loc_801AD4BC;
    }
}

loc_801AD490:
{
    // inline leaf 0x801A0598 (8 guest instruction(s))
}

loc_inl0_0x801A0598:
{
    r0 = MemoryInline::FlatRead32((r13 + -25512));
}

loc_inl0_0x801A05A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x801A05AC;
    }
}

loc_inl0_0x801A05A4:
{
    r3 = 64;
    goto loc_inl0_cont_801A0598;
}

loc_inl0_0x801A05AC:
{
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead8((r3 + 12676));
}

loc_inl0_cont_801A0598:
{
    // end of inlined leaf 0x801A0598
    r0 = (r3 & 255);
}

loc_801AD49C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(128))) {
        goto loc_801AD4BC;
    }
}

loc_801AD4A0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8019F33Cu>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r3 & -268435456);
    r0 = (r3 + -268435456);
}

loc_801AD4B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_801AD4BC;
    }
}

loc_801AD4B4:
{
    // inline leaf 0x8016321C (2 guest instruction(s))
    r3 = 0x80000000u;
    // end of inlined leaf 0x8016321C
    r31 = MemoryInline::FlatRead16((r3 + 4));
}

loc_801AD4BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801AD4C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AD4D0;
    }
}

loc_801AD4C4:
{
    // inline leaf 0x8016321C (2 guest instruction(s))
    r3 = 0x80000000u;
    // end of inlined leaf 0x8016321C
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_801AD510;
}

loc_801AD4D0:
{
    r0 = -1;
    r4 = 0x802A0000u;
    r3 = (r1 + 16);
    r4 = (r4 + -13680);
    r5 = (r29 & r0);
    r6 = (r28 & r0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801AD4F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 16);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8019C380u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AD500:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AD50C;
    }
}

loc_801AD504:
{
    r3 = 0;
    goto loc_801AD51C;
}

loc_801AD50C:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
}

loc_801AD510:
{
    r0 = (r0 - r31);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_801AD51C:
{
    r0 = MemoryInline::FlatRead32((r1 + 180));
    r31 = MemoryInline::FlatRead32((r1 + 172));
    r30 = MemoryInline::FlatRead32((r1 + 168));
    r29 = MemoryInline::FlatRead32((r1 + 164));
    r28 = MemoryInline::FlatRead32((r1 + 160));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AD43C func_801AD43C preserves=true fpr_mask=0x00000000
