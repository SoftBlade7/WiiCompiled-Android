#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80742CC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80742CC8;

loc_80742CC8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808D0000u;
    r31 = (r31 + -19576);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 364));
    r5 = MemoryInline::FlatRead32((r3 + 368));
    ctx->lr = 0x80742CF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80742898u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 360));
    r7 = r30;
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_80742D28;
}

loc_80742D08:
{
    r4 = MemoryInline::FlatRead32((r7 + 236));
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_80742D14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80742D20;
    }
}

loc_80742D18:
{
    MemoryInline::FlatWrite32((r4 + 24), r6);
    r6 = (r6 + 1);
}

loc_80742D20:
{
    r7 = (r7 + 8);
    r5 = (r5 + 1);
}

loc_80742D28:
{
    r0 = MemoryInline::FlatRead32((r30 + 376));
}

loc_80742D30:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_80742D08;
    }
}

loc_80742D34:
{
    r3 = MemoryInline::FlatRead32((r30 + 364));
    r7 = r30;
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_80742D68;
}

loc_80742D48:
{
    r4 = MemoryInline::FlatRead32((r7 + 236));
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_80742D54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80742D60;
    }
}

loc_80742D58:
{
    MemoryInline::FlatWrite32((r4 + 24), r6);
    r6 = (r6 + 1);
}

loc_80742D60:
{
    r7 = (r7 + 8);
    r5 = (r5 + 1);
}

loc_80742D68:
{
    r0 = MemoryInline::FlatRead32((r30 + 376));
}

loc_80742D70:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_80742D48;
    }
}

loc_80742D74:
{
    r3 = MemoryInline::FlatRead32((r30 + 368));
    r7 = r30;
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_80742DA8;
}

loc_80742D88:
{
    r4 = MemoryInline::FlatRead32((r7 + 236));
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_80742D94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80742DA0;
    }
}

loc_80742D98:
{
    MemoryInline::FlatWrite32((r4 + 24), r6);
    r6 = (r6 + 1);
}

loc_80742DA0:
{
    r7 = (r7 + 8);
    r5 = (r5 + 1);
}

loc_80742DA8:
{
    r0 = MemoryInline::FlatRead32((r30 + 376));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80742DB0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80742D88;
    }
}

loc_80742DB4:
{
    r3 = MemoryInline::FlatRead32((r30 + 360));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80742DC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 364));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80742DDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    // inline leaf 0x80739548 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80739548
}

loc_80742DEC:
{
    r4 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80742E08;
    }
}

loc_80742DF4:
{
}

loc_80742DF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80742E1C;
    }
}

loc_80742DFC:
{
}

loc_80742E00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80742E30;
    }
}

loc_80742E04:
{
    goto loc_80742E40;
}

loc_80742E08:
{
    r3 = MemoryInline::FlatRead16((r31 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r31 + 36));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80742E40;
}

loc_80742E1C:
{
    r3 = MemoryInline::FlatRead16((r31 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r31 + 38));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80742E40;
}

loc_80742E30:
{
    r3 = MemoryInline::FlatRead16((r31 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r31 + 40));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80742E40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80742E44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80742E4C;
    }
}

loc_80742E48:
{
    r4 = 0;
}

loc_80742E4C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r31 + 34));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r3);
    r0 = (r0 * 60);
    MemoryInline::FlatWrite32((r30 + 388), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80742CC8 func_80742CC8 preserves=true fpr_mask=0x00000000
