#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016C854(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016C854;

loc_8016C854:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r13 + -25680));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016C86C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016C87C;
    }
}

loc_8016C870:
{
    r0 = MemoryInline::FlatRead8((r13 + -25679));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016C878:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016C884;
    }
}

loc_8016C87C:
{
    r3 = 0;
    goto loc_8016C93C;
}

loc_8016C884:
{
    r4 = 0x80340000u;
    r3 = 0x80340000u;
    r6 = MemoryInline::FlatRead32((r4 + 15808));
    r4 = MemoryInline::FlatRead32((r3 + 15844));
}

loc_8016C898:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r6))) {
        goto loc_8016C8A0;
    }
}

loc_8016C89C:
{
    r7 = 1;
}

loc_8016C8A0:
{
    r5 = 0x80340000u;
    r3 = 0x80340000u;
    r5 = (r5 + 15808);
    r3 = (r3 + 15844);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r5 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8016C8BC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8016C8C4;
    }
}

loc_8016C8C0:
{
    r7 = (r7 + 1);
}

loc_8016C8C4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
}

loc_8016C8C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016C8D4;
    }
}

loc_8016C8CC:
{
    r3 = 1;
    goto loc_8016C93C;
}

loc_8016C8D4:
{
    r3 = (r5 - r6);
    r6 = (r0 - r4);
    r0 = 0;
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8016C8EC;
    }
}

loc_8016C8E4:
{
}

loc_8016C8E8:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(0))) {
        goto loc_8016C8FC;
    }
}

loc_8016C8EC:
{
}

loc_8016C8F0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8016C900;
    }
}

loc_8016C8F4:
{
}

loc_8016C8F8:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_8016C900;
    }
}

loc_8016C8FC:
{
    r0 = 1;
}

loc_8016C900:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016C904:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016C938;
    }
}

loc_8016C908:
{
    r3 = 0x80290000u;
    r3 = (r3 + -24672);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8016C918u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80340000u;
    r3 = 0x80290000u;
    r5 = (r4 + 15808);
    r4 = MemoryInline::FlatRead32((r4 + 15808));
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r3 = (r3 + -24648);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8016C938u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8016C938:
{
    r3 = 0;
}

loc_8016C93C:
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8016C854 func_8016C854 preserves=true fpr_mask=0x00000000
