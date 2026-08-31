#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807EE494(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807EE494;

loc_807EE494:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x807EE4ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807EC7F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & 1020);
    r6 = MemoryInline::FlatRead32((r4 + -10448));
    r4 = 1;
    r0 = 0;
    r3 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 12));
    r6_addr_0 = (r6 + r5);
    r5 = MemoryInline::FlatRead32(r6_addr_0);
    r5 = MemoryInline::FlatRead8((r5 + 38));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 409), 0, 242u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 409), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 229u, (r31 + 638), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 223u, (r31 + 632), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 225u, (r31 + 634), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 227u, (r31 + 636), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 241u, (r31 + 650), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 235u, (r31 + 644), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 237u, (r31 + 646), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 239u, (r31 + 648), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 296));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_807EE500:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807EE510;
    }
}

loc_807EE504:
{
    r4 = MemoryInline::FlatRead32((r3 + 3084));
    r3 = (r31 + 412);
    ctx->lr = 0x807EE510u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807EE510:
{
    r3 = (r31 + 152);
    r4 = 0;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r5 = 0x808B0000u;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -25976));
    ctx->lr = 0x807EE52Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x807EE534u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DAC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807EE494 func_807EE494 preserves=true fpr_mask=0x00000000
