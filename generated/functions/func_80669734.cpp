#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80669734(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80669734;

loc_80669734:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    MemoryInline::FlatWriteRam32((r1 + 236), r31);
    r31 = r3;
    r3 = (r1 + 8);
    ctx->lr = 0x80669750u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C398u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r1 + 192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80669758:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066982C;
    }
}

loc_8066975C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(32));
}

loc_80669760:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8066982C;
    }
}

loc_80669764:
{
    r0 = MemoryInline::FlatRead32((r1 + 204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066976C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066977C;
    }
}

loc_80669770:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80669774:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806697BC;
    }
}

loc_80669778:
{
    goto loc_8066982C;
}

loc_8066977C:
{
    r3 = MemoryInline::FlatRead16((r1 + 176));
    r0 = (r4 * 168);
    r6 = MemoryInline::FlatRead8((r1 + 178));
    r4 = (r31 + 65536);
    r7 = MemoryInline::FlatRead16((r1 + 180));
    r5 = (r3 * 60);
    r3 = (r4 + r0);
    r0 = (r6 + r5);
    r0 = (r0 * 1000);
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r3 + -29948), r0);
    r0 = MemoryInline::FlatRead32((r1 + 192));
    r0 = (r0 * 168);
    r3 = (r4 + r0);
    r31 = (r3 + -29944);
    goto loc_806697F8;
}

loc_806697BC:
{
    r3 = MemoryInline::FlatRead16((r1 + 176));
    r0 = (r4 * 168);
    r6 = MemoryInline::FlatRead8((r1 + 178));
    r4 = (r31 + 65536);
    r7 = MemoryInline::FlatRead16((r1 + 180));
    r5 = (r3 * 60);
    r3 = (r4 + r0);
    r0 = (r6 + r5);
    r0 = (r0 * 1000);
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r3 + -29864), r0);
    r0 = MemoryInline::FlatRead32((r1 + 192));
    r0 = (r0 * 168);
    r3 = (r4 + r0);
    r31 = (r3 + -29860);
}

loc_806697F8:
{
    r3 = r31;
    r4 = (r1 + 32);
    r5 = 76;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 196));
    MemoryInline::FlatWrite8((r31 + 76), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 184));
    MemoryInline::FlatWrite8((r31 + 77), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 188));
    MemoryInline::FlatWrite8((r31 + 78), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 212));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWrite8((r31 + 79), static_cast<uint8_t>(r0));
}

loc_8066982C:
{
    r4 = 0x80520000u;
    r3 = (r1 + 112);
    r4 = (r4 + -15564);
    r5 = 12;
    r6 = 5;
    ctx->lr = 0x80669844u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 244));
    r31 = MemoryInline::FlatRead32((r1 + 236));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80669734 func_80669734 preserves=true fpr_mask=0x00000000
