#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80712280(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80712280;

loc_80712280:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->cr = cr;
    InvokeDirectCpu<0x8085E85Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80712288:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80712294;
    }
}

loc_8071228C:
{
    r28 = 1;
    goto loc_80712378;
}

loc_80712294:
{
    r0 = MemoryInline::FlatRead8((r31 + 76));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8071229C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80712354;
    }
}

loc_807122A0:
{
    r25 = 0;
    r26 = 0;
    r29 = 0;
    r24 = 0;
    goto loc_80712308;
}

loc_807122B4:
{
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r4 = (r24 & 255);
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r3 = (r3 & 255);
    ctx->lr = 0x807122C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078CFA4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807122CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807122E4;
    }
}

loc_807122D0:
{
}

loc_807122D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_807122F0;
    }
}

loc_807122D8:
{
}

loc_807122DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_807122FC;
    }
}

loc_807122E0:
{
    goto loc_80712304;
}

loc_807122E4:
{
    r0 = (r29 + 1);
    r29 = (r0 & 255);
    goto loc_80712304;
}

loc_807122F0:
{
    r0 = (r26 + 1);
    r26 = (r0 & 255);
    goto loc_80712304;
}

loc_807122FC:
{
    r0 = (r25 + 1);
    r25 = (r0 & 255);
}

loc_80712304:
{
    r24 = (r24 + 1);
}

loc_80712308:
{
    r0 = MemoryInline::FlatRead8((r31 + 76));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r0));
}

loc_80712310:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807122B4;
    }
}

loc_80712314:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80712318:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80712324;
    }
}

loc_8071231C:
{
    r28 = 1;
    goto loc_80712378;
}

loc_80712324:
{
}

loc_80712328:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8071233C;
    }
}

loc_8071232C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80712330:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8071233C;
    }
}

loc_80712334:
{
    r30 = 2;
    goto loc_80712378;
}

loc_8071233C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80712340:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071234C;
    }
}

loc_80712344:
{
    r30 = 0;
    goto loc_80712378;
}

loc_8071234C:
{
    r30 = 1;
    goto loc_80712378;
}

loc_80712354:
{
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r4 = 0;
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r3 = (r3 & 255);
    ctx->lr = 0x80712368u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078CFA4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_8071236C:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80712378;
    }
}

loc_80712374:
{
    r28 = 1;
}

loc_80712378:
{
    r29 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->cr = cr;
    InvokeDirectCpu<0x807123BCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF001FFB gpr_write=0xFF001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80712280 func_80712280 preserves=true fpr_mask=0x00000000
