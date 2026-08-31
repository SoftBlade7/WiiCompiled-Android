#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80848BE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80848BE8;

loc_80848BE8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r3 + 3484));
}

loc_80848C0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80848C24;
    }
}

loc_80848C10:
{
}

loc_80848C14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80848C34;
    }
}

loc_80848C18:
{
}

loc_80848C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80848C3C;
    }
}

loc_80848C20:
{
    goto loc_80848C4C;
}

loc_80848C24:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10480));
    r5 = MemoryInline::FlatRead8((r4 + 724));
    goto loc_80848C50;
}

loc_80848C34:
{
    r5 = 6;
    goto loc_80848C50;
}

loc_80848C3C:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10480));
    r5 = MemoryInline::FlatRead8((r4 + 744));
    goto loc_80848C50;
}

loc_80848C4C:
{
    r5 = 0;
}

loc_80848C50:
{
    r4 = MemoryInline::FlatRead32((r3 + 3480));
    r0 = (r4 + 10);
}

loc_80848C5C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_80848CA8;
    }
}

loc_80848C60:
{
    MemoryInline::FlatWrite32((r3 + 3480), r0);
    r29 = 0;
    r30 = 1;
}

loc_80848C6C:
{
    r3 = MemoryInline::FlatRead32((r31 + 1724));
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r29));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80848C8C;
    }
}

loc_80848C7C:
{
    r3 = MemoryInline::FlatRead32((r31 + 72));
    r4 = r29;
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x805BDB44u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_80848C8C:
{
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(5));
}

loc_80848C94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80848C6C;
    }
}

loc_80848C98:
{
    r0 = MemoryInline::FlatRead32((r31 + 3480));
    r3 = r31;
    r4 = (r0 & 255);
    ctx->lr = 0x80848CA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80848F94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80848CA8:
{
    r0 = MemoryInline::FlatRead32((r31 + 3484));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80848CB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80848CC8;
    }
}

loc_80848CB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80848CB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80848CD8;
    }
}

loc_80848CBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80848CC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80848CE0;
    }
}

loc_80848CC4:
{
    goto loc_80848CF0;
}

loc_80848CC8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    r6 = MemoryInline::FlatRead8((r3 + 724));
    goto loc_80848CF4;
}

loc_80848CD8:
{
    r6 = 6;
    goto loc_80848CF4;
}

loc_80848CE0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    r6 = MemoryInline::FlatRead8((r3 + 744));
    goto loc_80848CF4;
}

loc_80848CF0:
{
    r6 = 0;
}

loc_80848CF4:
{
    r7 = MemoryInline::FlatRead32((r31 + 3480));
    r3 = (r31 + 1732);
    r0 = (r7 + 10);
    r5 = (0 - r7);
    r0 = (r6 ^ r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 1);
    r5 = (r5 & ~r7);
    r0 = (r0 & r6);
    r0 = (r4 - r0);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    ctx->lr = 0x80848D24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80636264u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80848BE8 func_80848BE8 preserves=true fpr_mask=0x00000000
