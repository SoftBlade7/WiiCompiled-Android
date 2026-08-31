#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FC58C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FC58C;

loc_801FC58C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FC598:
{
    r6 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    r7 = r5;
    MemoryInline::FlatWrite32(r5, r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FC5B8;
    }
}

loc_801FC5B0:
{
    r3 = 10;
    goto loc_801FC6AC;
}

loc_801FC5B8:
{
    r9 = MemoryInline::FlatRead32((r3 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_801FC5C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FC5CC;
    }
}

loc_801FC5C4:
{
    r3 = 10;
    goto loc_801FC6AC;
}

loc_801FC5CC:
{
    r10 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead8((r10 + 6242));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(65));
}

loc_801FC5DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FC5E8;
    }
}

loc_801FC5E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_801FC5E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FC5F0;
    }
}

loc_801FC5E8:
{
    r3 = 35;
    goto loc_801FC6AC;
}

loc_801FC5F0:
{
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r11 = MemoryInline::FlatRead32(r8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
}

loc_801FC5FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FC608;
    }
}

loc_801FC600:
{
    r3 = 0;
    goto loc_801FC6AC;
}

loc_801FC608:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FC610:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC628;
    }
}

loc_801FC614:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r3 = 0;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_801FC6AC;
}

loc_801FC628:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FC630:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC690;
    }
}

loc_801FC634:
{
    r8 = MemoryInline::FlatRead32(r9);
    r6 = MemoryInline::FlatRead8((r10 + 32));
    r0 = MemoryInline::FlatRead8((r10 + 33));
    r9 = (r8 + 1);
    r0 = (r6 + r0);
    r0 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801FC650:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801FC660;
    }
}

loc_801FC654:
{
    MemoryInline::FlatWrite32(r5, r9);
    r3 = 0;
    goto loc_801FC6AC;
}

loc_801FC660:
{
    MemoryInline::FlatWrite32(r5, r8);
    r8 = MemoryInline::FlatRead32((r3 + 48));
    r6 = MemoryInline::FlatRead32((r3 + 44));
    r5 = MemoryInline::FlatRead8((r8 + 32));
    r0 = MemoryInline::FlatRead8((r8 + 33));
    r8 = MemoryInline::FlatRead32(r6);
    r0 = (r5 + r0);
    r11 = MemoryInline::FlatRead32((r6 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
    r5 = (r8 + 1);
    r6 = (r4 - r0);
    goto loc_801FC694;
}

loc_801FC690:
{
    r5 = 1;
}

loc_801FC694:
{
    r4 = r11;
    ctx->lr = 0x801FC69Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x801FBC3Cu>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FC6A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC6A8;
    }
}

loc_801FC6A4:
{
    goto loc_801FC6AC;
}

loc_801FC6A8:
{
    r3 = 0;
}

loc_801FC6AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801FC58C func_801FC58C preserves=true fpr_mask=0x00000000
