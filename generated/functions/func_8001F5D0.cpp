#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001F5D0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8001F5D0;

loc_8001F5D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = (r4 + r3);
    r6 = 1792;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
}

loc_8001F5F0:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r5;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001F604;
    }
}

loc_8001F5FC:
{
    r3 = 1792;
    goto loc_8001F6B0;
}

loc_8001F604:
{
    r4 = 0x80240000u;
    r4 = (r4 + 28584);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8001F614:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8001F6AC;
    }
}

loc_8001F618:
{
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_8001F620:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8001F6AC;
    }
}

loc_8001F624:
{
}

loc_8001F628:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8001F638;
    }
}

loc_8001F62C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001F634:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001F654;
    }
}

loc_8001F638:
{
}

loc_8001F63C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8001F65C;
    }
}

loc_8001F640:
{
    r4 = 0x80240000u;
    r4 = (r4 + 28584);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001F650:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001F65C;
    }
}

loc_8001F654:
{
    r6 = 1792;
    goto loc_8001F6AC;
}

loc_8001F65C:
{
    r4 = 0x80240000u;
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 28584));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8001F66C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001F680;
    }
}

loc_8001F670:
{
    r5 = r30;
    r4 = (r0 - r3);
    ctx->lr = 0x8001F67Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001F5D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r6 = r3;
}

loc_8001F680:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8001F684:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001F6AC;
    }
}

loc_8001F688:
{
    r3 = 0x80240000u;
    r3 = (r3 + 28584);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
}

loc_8001F698:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001F6AC;
    }
}

loc_8001F69C:
{
    r5 = r30;
    r4 = (r31 - r3);
    ctx->lr = 0x8001F6A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001F5D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r6 = r3;
}

loc_8001F6AC:
{
    r3 = r6;
}

loc_8001F6B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
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

// RECOMP_GUEST_ABI gpr_read=0xC00007FB gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8001F5D0 func_8001F5D0 preserves=true fpr_mask=0x00000000
