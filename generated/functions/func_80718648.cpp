#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80718648(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80718648;

loc_80718648:
{
    MemoryInline::FlatWriteRam32((r1 + -512), r1);
    r1 = (r1 + -512);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 516), r0);
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 508), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 504), r30);
    MemoryInline::FlatWriteRam32((r1 + 500), r29);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r5 + 10232));
    r0 = MemoryInline::FlatRead8((r4 + 76));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r5 + 10232));
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(58));
}

loc_80718688:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80718EDC;
    }
}

loc_8071868C:
{
    r3 = 0x808D0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -28160);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80718818u:
        goto loc_80718818;
        break;
    case 0x80718720u:
        goto loc_80718720;
        break;
    case 0x8071898Cu:
        goto loc_8071898C;
        break;
    case 0x8071879Cu:
        goto loc_8071879C;
        break;
    case 0x80718894u:
        goto loc_80718894;
        break;
    case 0x80718910u:
        goto loc_80718910;
        break;
    case 0x807186A4u:
        goto loc_807186A4;
        break;
    case 0x80718A08u:
        goto loc_80718A08;
        break;
    case 0x80718BF8u:
        goto loc_80718BF8;
        break;
    case 0x80718C74u:
        goto loc_80718C74;
        break;
    case 0x80718CF0u:
        goto loc_80718CF0;
        break;
    case 0x80718DE8u:
        goto loc_80718DE8;
        break;
    case 0x80718D6Cu:
        goto loc_80718D6C;
        break;
    case 0x80718A84u:
        goto loc_80718A84;
        break;
    case 0x80718B00u:
        goto loc_80718B00;
        break;
    case 0x80718B7Cu:
        goto loc_80718B7C;
        break;
    case 0x80718E64u:
        goto loc_80718E64;
        break;
    case 0x80718EDCu:
        goto loc_80718EDC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_807186A4:
{
    r3 = 0x809C0000u;
    r30 = 2;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807186B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807186F0;
    }
}

loc_807186BC:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 456), static_cast<uint8_t>(r0));
    r4 = (r1 + 456);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 460), r0);
    ctx->lr = 0x807186D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 460));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_807186E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807186F0;
    }
}

loc_807186E8:
{
    r0 = (r3 + -1);
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_807186F0:
{
    r29 = 0;
    goto loc_80718710;
}

loc_807186F8:
{
    r3 = r31;
    r4 = r30;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r6 = 0;
    ctx->lr = 0x8071870Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = (r29 + 1);
}

loc_80718710:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_80718718:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807186F8;
    }
}

loc_8071871C:
{
    goto loc_80718EDC;
}

loc_80718720:
{
    r3 = 0x809C0000u;
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80718734:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071876C;
    }
}

loc_80718738:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 428), static_cast<uint8_t>(r0));
    r4 = (r1 + 428);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 432), r0);
    ctx->lr = 0x80718754u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 432));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_80718760:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8071876C;
    }
}

loc_80718764:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8071876C:
{
    r30 = 0;
    goto loc_8071878C;
}

loc_80718774:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x80718788u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_8071878C:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718794:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80718774;
    }
}

loc_80718798:
{
    goto loc_80718EDC;
}

loc_8071879C:
{
    r3 = 0x809C0000u;
    r29 = 7;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807187B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807187E8;
    }
}

loc_807187B4:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 400), static_cast<uint8_t>(r0));
    r4 = (r1 + 400);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 404), r0);
    ctx->lr = 0x807187D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 404));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_807187DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807187E8;
    }
}

loc_807187E0:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_807187E8:
{
    r30 = 0;
    goto loc_80718808;
}

loc_807187F0:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x80718804u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_80718808:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718810:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807187F0;
    }
}

loc_80718814:
{
    goto loc_80718EDC;
}

loc_80718818:
{
    r3 = 0x809C0000u;
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8071882C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80718864;
    }
}

loc_80718830:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 372), static_cast<uint8_t>(r0));
    r4 = (r1 + 372);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 376), r0);
    ctx->lr = 0x8071884Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 376));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_80718858:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80718864;
    }
}

loc_8071885C:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80718864:
{
    r30 = 0;
    goto loc_80718884;
}

loc_8071886C:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x80718880u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_80718884:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_8071888C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8071886C;
    }
}

loc_80718890:
{
    goto loc_80718EDC;
}

loc_80718894:
{
    r3 = 0x809C0000u;
    r29 = 5;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807188A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807188E0;
    }
}

loc_807188AC:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 344), static_cast<uint8_t>(r0));
    r4 = (r1 + 344);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 348), r0);
    ctx->lr = 0x807188C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 348));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_807188D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807188E0;
    }
}

loc_807188D8:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_807188E0:
{
    r30 = 0;
    goto loc_80718900;
}

loc_807188E8:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x807188FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_80718900:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718908:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807188E8;
    }
}

loc_8071890C:
{
    goto loc_80718EDC;
}

loc_80718910:
{
    r3 = 0x809C0000u;
    r29 = 2;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80718924:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071895C;
    }
}

loc_80718928:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 316), static_cast<uint8_t>(r0));
    r4 = (r1 + 316);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 320), r0);
    ctx->lr = 0x80718944u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 320));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_80718950:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8071895C;
    }
}

loc_80718954:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8071895C:
{
    r30 = 0;
    goto loc_8071897C;
}

loc_80718964:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x80718978u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_8071897C:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718984:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80718964;
    }
}

loc_80718988:
{
    goto loc_80718EDC;
}

loc_8071898C:
{
    r3 = 0x809C0000u;
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807189A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807189D8;
    }
}

loc_807189A4:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 288), static_cast<uint8_t>(r0));
    r4 = (r1 + 288);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    ctx->lr = 0x807189C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 292));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_807189CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807189D8;
    }
}

loc_807189D0:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_807189D8:
{
    r30 = 0;
    goto loc_807189F8;
}

loc_807189E0:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x807189F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_807189F8:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718A00:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807189E0;
    }
}

loc_80718A04:
{
    goto loc_80718EDC;
}

loc_80718A08:
{
    r3 = 0x809C0000u;
    r29 = 7;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80718A1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80718A54;
    }
}

loc_80718A20:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 260), static_cast<uint8_t>(r0));
    r4 = (r1 + 260);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 264), r0);
    ctx->lr = 0x80718A3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 264));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_80718A48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80718A54;
    }
}

loc_80718A4C:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80718A54:
{
    r30 = 0;
    goto loc_80718A74;
}

loc_80718A5C:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x80718A70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_80718A74:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718A7C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80718A5C;
    }
}

loc_80718A80:
{
    goto loc_80718EDC;
}

loc_80718A84:
{
    r3 = 0x809C0000u;
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80718A98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80718AD0;
    }
}

loc_80718A9C:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 232), static_cast<uint8_t>(r0));
    r4 = (r1 + 232);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 236), r0);
    ctx->lr = 0x80718AB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 236));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_80718AC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80718AD0;
    }
}

loc_80718AC8:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80718AD0:
{
    r30 = 0;
    goto loc_80718AF0;
}

loc_80718AD8:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x80718AECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_80718AF0:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718AF8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80718AD8;
    }
}

loc_80718AFC:
{
    goto loc_80718EDC;
}

loc_80718B00:
{
    r3 = 0x809C0000u;
    r29 = 1;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80718B14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80718B4C;
    }
}

loc_80718B18:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 204), static_cast<uint8_t>(r0));
    r4 = (r1 + 204);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 208), r0);
    ctx->lr = 0x80718B34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 208));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_80718B40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80718B4C;
    }
}

loc_80718B44:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80718B4C:
{
    r30 = 0;
    goto loc_80718B6C;
}

loc_80718B54:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x80718B68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_80718B6C:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718B74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80718B54;
    }
}

loc_80718B78:
{
    goto loc_80718EDC;
}

loc_80718B7C:
{
    r3 = 0x809C0000u;
    r29 = 1;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80718B90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80718BC8;
    }
}

loc_80718B94:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 176), static_cast<uint8_t>(r0));
    r4 = (r1 + 176);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    ctx->lr = 0x80718BB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 180));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_80718BBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80718BC8;
    }
}

loc_80718BC0:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80718BC8:
{
    r30 = 0;
    goto loc_80718BE8;
}

loc_80718BD0:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x80718BE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_80718BE8:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718BF0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80718BD0;
    }
}

loc_80718BF4:
{
    goto loc_80718EDC;
}

loc_80718BF8:
{
    r3 = 0x809C0000u;
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80718C0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80718C44;
    }
}

loc_80718C10:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 148), static_cast<uint8_t>(r0));
    r4 = (r1 + 148);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 152), r0);
    ctx->lr = 0x80718C2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 152));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_80718C38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80718C44;
    }
}

loc_80718C3C:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80718C44:
{
    r30 = 0;
    goto loc_80718C64;
}

loc_80718C4C:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x80718C60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_80718C64:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718C6C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80718C4C;
    }
}

loc_80718C70:
{
    goto loc_80718EDC;
}

loc_80718C74:
{
    r3 = 0x809C0000u;
    r29 = 1;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80718C88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80718CC0;
    }
}

loc_80718C8C:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 120), static_cast<uint8_t>(r0));
    r4 = (r1 + 120);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    ctx->lr = 0x80718CA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 124));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_80718CB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80718CC0;
    }
}

loc_80718CB8:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80718CC0:
{
    r30 = 0;
    goto loc_80718CE0;
}

loc_80718CC8:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x80718CDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_80718CE0:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718CE8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80718CC8;
    }
}

loc_80718CEC:
{
    goto loc_80718EDC;
}

loc_80718CF0:
{
    r3 = 0x809C0000u;
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80718D04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80718D3C;
    }
}

loc_80718D08:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 92), static_cast<uint8_t>(r0));
    r4 = (r1 + 92);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    ctx->lr = 0x80718D24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 96));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_80718D30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80718D3C;
    }
}

loc_80718D34:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80718D3C:
{
    r30 = 0;
    goto loc_80718D5C;
}

loc_80718D44:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x80718D58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_80718D5C:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718D64:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80718D44;
    }
}

loc_80718D68:
{
    goto loc_80718EDC;
}

loc_80718D6C:
{
    r3 = 0x809C0000u;
    r29 = 3;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80718D80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80718DB8;
    }
}

loc_80718D84:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 64), static_cast<uint8_t>(r0));
    r4 = (r1 + 64);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    ctx->lr = 0x80718DA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 68));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_80718DAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80718DB8;
    }
}

loc_80718DB0:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80718DB8:
{
    r30 = 0;
    goto loc_80718DD8;
}

loc_80718DC0:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x80718DD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_80718DD8:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718DE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80718DC0;
    }
}

loc_80718DE4:
{
    goto loc_80718EDC;
}

loc_80718DE8:
{
    r3 = 0x809C0000u;
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80718DFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80718E34;
    }
}

loc_80718E00:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r0));
    r4 = (r1 + 36);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    ctx->lr = 0x80718E1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 40));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_80718E28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80718E34;
    }
}

loc_80718E2C:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80718E34:
{
    r30 = 0;
    goto loc_80718E54;
}

loc_80718E3C:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x80718E50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_80718E54:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718E5C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80718E3C;
    }
}

loc_80718E60:
{
    goto loc_80718EDC;
}

loc_80718E64:
{
    r3 = 0x809C0000u;
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80718E78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80718EB0;
    }
}

loc_80718E7C:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x80718E98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 36));
}

loc_80718EA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80718EB0;
    }
}

loc_80718EA8:
{
    r0 = (r3 + -1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80718EB0:
{
    r30 = 0;
    goto loc_80718ED0;
}

loc_80718EB8:
{
    r3 = r31;
    r4 = r29;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r6 = 0;
    ctx->lr = 0x80718ECCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_80718ED0:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80718ED8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80718EB8;
    }
}

loc_80718EDC:
{
    r0 = MemoryInline::FlatRead32((r1 + 516));
    r31 = MemoryInline::FlatRead32((r1 + 508));
    r30 = MemoryInline::FlatRead32((r1 + 504));
    r29 = MemoryInline::FlatRead32((r1 + 500));
    ctx->lr = r0;
    r1 = (r1 + 512);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80718648 func_80718648 preserves=true fpr_mask=0x00000000
