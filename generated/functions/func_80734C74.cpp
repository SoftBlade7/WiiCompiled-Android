#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80734C74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80734C74;

loc_80734C74:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r4 = MemoryInline::FlatRead32((r3 + 408));
    r3 = MemoryInline::FlatRead32(r4);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r4 + 13848));
    r0 = (r0 * 584);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r3 + r0);
    r30 = MemoryInline::FlatRead32((r3 + 140));
}

loc_80734CB8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(20))) {
        goto loc_80734CC4;
    }
}

loc_80734CBC:
{
    r0 = 1;
    goto loc_80734CC8;
}

loc_80734CC4:
{
    r0 = 0;
}

loc_80734CC8:
{
}

loc_80734CCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80734D50;
    }
}

loc_80734CD0:
{
    r3 = MemoryInline::FlatRead32((r31 + 408));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 324));
    r3 = MemoryInline::FlatRead32((r3 + 64));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80744C1Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_80734CF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80734D50;
    }
}

loc_80734CF4:
{
    r0 = MemoryInline::FlatRead8((r31 + 418));
    r3 = MemoryInline::FlatRead32((r31 + 424));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80734D00:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 424), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734D30;
    }
}

loc_80734D0C:
{
}

loc_80734D10:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(3))) {
        goto loc_80734D1C;
    }
}

loc_80734D14:
{
}

loc_80734D18:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(6))) {
        goto loc_80734D50;
    }
}

loc_80734D1C:
{
    r3 = 1;
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 416), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r31 + 420), r0);
    goto loc_80734D50;
}

loc_80734D30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80734D34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80734D50;
    }
}

loc_80734D38:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 416), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80734D4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807348C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 420), r3);
}

loc_80734D50:
{
    r3 = MemoryInline::FlatRead32((r31 + 408));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r4 + 13848));
    r0 = (r0 * 584);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_80734D7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80734D90;
    }
}

loc_80734D80:
{
    r3 = r31;
    r4 = (r31 + 56);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_80734DF4;
}

loc_80734D90:
{
    r0 = MemoryInline::FlatRead8((r31 + 416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80734D98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734DF4;
    }
}

loc_80734D9C:
{
    r0 = MemoryInline::FlatRead32((r31 + 420));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80734DA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734DBC;
    }
}

loc_80734DA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80734DAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734DD8;
    }
}

loc_80734DB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80734DB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734DE8;
    }
}

loc_80734DB8:
{
    goto loc_80734DF4;
}

loc_80734DBC:
{
    r3 = MemoryInline::FlatRead32((r31 + 408));
    r4 = 4;
    // inline leaf 0x8073199C (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8073199C
    r3 = r31;
    r4 = (r31 + 56);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_80734DF4;
}

loc_80734DD8:
{
    r3 = r31;
    r4 = (r31 + 232);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_80734DF4;
}

loc_80734DE8:
{
    r3 = r31;
    r4 = (r31 + 276);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_80734DF4:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF00003B gpr_write=0xFF000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80734C74 func_80734C74 preserves=true fpr_mask=0x00000000
