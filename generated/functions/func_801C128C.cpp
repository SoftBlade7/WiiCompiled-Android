#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C128C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801C128C;

loc_801C128C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80350000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r4 + 2352);
    r31 = r3;
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    r0 = MemoryInline::FlatRead8((r4 + 2248));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 255);
    r0 = (r0 * 96);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 201));
    r29 = (r3 + 160);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-2));
}

loc_801C12E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C137C;
    }
}

loc_801C12EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C12FC;
    }
}

loc_801C12F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-7));
}

loc_801C12F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C137C;
    }
}

loc_801C12F8:
{
    goto loc_801C1390;
}

loc_801C12FC:
{
}

loc_801C1300:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C1308;
    }
}

loc_801C1304:
{
    goto loc_801C1390;
}

loc_801C1308:
{
    r3 = MemoryInline::FlatRead32((r4 + 2232));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_801C1310:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C1328;
    }
}

loc_801C1314:
{
    r3 = r30;
    r4 = r29;
    r5 = 42;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801C1408;
}

loc_801C1328:
{
    r0 = (r3 + -3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801C1330:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C1348;
    }
}

loc_801C1334:
{
    r3 = r30;
    r4 = r29;
    r5 = 50;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801C1408;
}

loc_801C1348:
{
    r0 = (r3 + -6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801C1350:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C1368;
    }
}

loc_801C1354:
{
    r3 = r30;
    r4 = r29;
    r5 = 54;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801C1408;
}

loc_801C1368:
{
    r3 = r30;
    r4 = r29;
    r5 = 90;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801C1408;
}

loc_801C137C:
{
    r3 = r30;
    r4 = r29;
    r5 = 42;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801C1408;
}

loc_801C1390:
{
    r3 = MemoryInline::FlatRead32((r4 + 2232));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_801C1398:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C13B0;
    }
}

loc_801C139C:
{
    r3 = r30;
    r4 = 0;
    r5 = 42;
    ctx->lr = 0x801C13ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801C1400;
}

loc_801C13B0:
{
    r0 = (r3 + -3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801C13B8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C13D0;
    }
}

loc_801C13BC:
{
    r3 = r30;
    r4 = 0;
    r5 = 50;
    ctx->lr = 0x801C13CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801C1400;
}

loc_801C13D0:
{
    r0 = (r3 + -6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801C13D8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C13F0;
    }
}

loc_801C13DC:
{
    r3 = r30;
    r4 = 0;
    r5 = 54;
    ctx->lr = 0x801C13ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801C1400;
}

loc_801C13F0:
{
    r3 = r30;
    r4 = 0;
    r5 = 90;
    ctx->lr = 0x801C1400u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801C1400:
{
    r0 = MemoryInline::FlatRead8((r29 + 41));
    MemoryInline::FlatWrite8((r30 + 41), static_cast<uint8_t>(r0));
}

loc_801C1408:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000DB gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C128C func_801C128C preserves=true fpr_mask=0x00000000
