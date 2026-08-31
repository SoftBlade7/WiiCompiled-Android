#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80542210(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80542210;

loc_80542210:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r9 = (r4 * 24);
    r10 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = 0;
    r4 = (r3 + r9);
    r0 = MemoryInline::FlatRead32((r4 + 1456));
}

loc_80542234:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80542268;
    }
}

loc_80542238:
{
    r8 = MemoryInline::FlatRead32((r4 + 1464));
    r4 = 0;
}

loc_80542244:
{
    if ((static_cast<uint32_t>(r8) > static_cast<uint32_t>(4))) {
        goto loc_8054225C;
    }
}

loc_80542248:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r0 = (r0 & 21);
}

loc_80542254:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8054225C;
    }
}

loc_80542258:
{
    r4 = 1;
}

loc_8054225C:
{
}

loc_80542260:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80542268;
    }
}

loc_80542264:
{
    r7 = 1;
}

loc_80542268:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8054226C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80542278;
    }
}

loc_80542270:
{
    r3 = 0;
    goto loc_805422BC;
}

loc_80542278:
{
    r7 = (r3 + r9);
    r4 = 1;
    MemoryInline::FlatWrite32((r7 + 1468), r5);
    MemoryInline::FlatWrite32((r7 + 1472), r6);
    MemoryInline::FlatWrite32((r7 + 1464), r4);
    r0 = MemoryInline::FlatRead8((r3 + 1561));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80542294:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805422B8;
    }
}

loc_80542298:
{
    MemoryInline::FlatWrite8((r3 + 1560), static_cast<uint8_t>(r4));
    r4 = 0x80540000u;
    r6 = 268435456;
    r3 = MemoryInline::FlatRead32((r3 + 1412));
    r5 = r10;
    r4 = (r4 + 7748);
    r6 = (r6 + 3);
    ctx->lr = 0x805422B8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80242C18u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805422B8:
{
    r3 = 1;
}

loc_805422BC:
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80542210 func_80542210 preserves=true fpr_mask=0x00000000
