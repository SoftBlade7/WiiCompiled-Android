#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B0520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801B0520;

loc_801B0520:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80350000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + -32160);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r5 + 346));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 372));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801B0550:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B057C;
    }
}

loc_801B0554:
{
    MemoryInline::FlatWrite32((r4 + 380), r3);
    r0 = 0;
    r4 = 0x801B0000u;
    r3 = (r5 + 8);
    MemoryInline::FlatWriteRam8((r5 + 345), static_cast<uint8_t>(r0));
    r4 = (r4 + 1544);
    r5 = (r5 + 148);
    ctx->lr = 0x801B0574u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019CAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B0578:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B05F4;
    }
}

loc_801B057C:
{
    r3 = 0x80350000u;
    r3 = (r3 + -32160);
    r0 = MemoryInline::FlatRead8((r3 + 346));
}

loc_801B058C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B05AC;
    }
}

loc_801B0590:
{
}

loc_801B0594:
{
    r0 = -128;
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_801B05A0;
    }
}

loc_801B059C:
{
    r0 = r31;
}

loc_801B05A0:
{
    r3 = 0x80350000u;
    r3 = (r3 + -32160);
    MemoryInline::FlatWriteRam32((r3 + 352), r0);
}

loc_801B05AC:
{
    r5 = 0x80350000u;
    r4 = 0;
    r5 = (r5 + -32160);
    r0 = MemoryInline::FlatRead8((r5 + 346));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 380), r4);
    r0 = MemoryInline::FlatRead8((r5 + 345));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B05D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B05F0;
    }
}

loc_801B05D4:
{
    r4 = 0x801B0000u;
    r3 = (r5 + 8);
    r4 = (r4 + 2000);
    r5 = (r5 + 148);
    ctx->lr = 0x801B05E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019CAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B05EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B05F4;
    }
}

loc_801B05F0:
{
    ctx->lr = 0x801B05F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B0694u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801B05F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801B0520 func_801B0520 preserves=true fpr_mask=0x00000000
